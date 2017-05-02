#include <iostream>
#include <fstream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <cmath>
using namespace std;

// double PI = 3.14159265;
#define PI 3.14159265

bool isachar(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? true : false);
}

void separeteString(string &content, std::vector<string> &words)
{
    int len = content.size();
    string word;
    for (int i=0; i<len; i++) {
        if (content[i] != '\n' && (isachar(content[i]) || content[i] == '\'')) {
            word += content[i];
        } else {
            words.push_back(word);
            word.clear();
        }
    }
}

void createMap(string &content, std::vector<string> &words, std::map<string, int> &map)
{
    int len = 0;
    separeteString(content, words);
    len = words.size();
    sort(words.begin(), words.end());
    for (int i=0; i<len; i++) {
        if (words[i].size()) {
            map[words[i]] = 0;
        }
    }
    for (int i=0; i<len; i++) {
        if (words[i].size()) {
            map[words[i]]++;
        }
    }
}

bool readFile(const char *filename, string& content)
{
    ifstream file;
    file.open(filename, ifstream::in);
    if (!file) {
        std::cerr << "error: unable to open file: "
                  << filename << '\n';
        return false;
    }

    while (!file.eof()) {
        string str;
        getline(file, str);
        content += str + '\n';
    }

    return true;
}

double calLength(std::map<string, int> map)
{
    double length = 0;
    for (auto var : map) {
        length += map[var.first] * map[var.first];
    }
    return length;
}

double calDotProduct(std::map<string, int> mapD1, std::map<string, int> mapD2)
{
    double sum = 0;
    for (auto var : mapD1) {
        if (mapD2.find(var.first) != mapD2.end()) {
            sum += mapD1[var.first] * mapD2[var.first];
        }
    }
    double deno =  sqrt(calLength(mapD1) * calLength(mapD2));
    // printf("%f %f\n", sum, deno);
    return (sum / deno);
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        return 1;
    }

    string contentD1, contentD2;

    if (!readFile(argv[1], contentD1)) {
        return 1;
    }
    // cout << contentD1;

    if (!readFile(argv[2], contentD2)) {
        return 1;
    }
    // cout << contentD2;

    std::vector<string> wordsD1;
    std::vector<string> wordsD2;
    std::map<string, int> mapD1;
    std::map<string, int> mapD2;

    createMap(contentD1, wordsD1, mapD1);
    createMap(contentD2, wordsD2, mapD2);
    // for (auto& var : mapD1) {
    //     cout << var.first << " " << var.second << endl;
    // }
    //
    // for (auto& var : mapD2) {
    //     cout << var.first << " " << var.second << endl;
    // }

    double dot = calDotProduct(mapD1, mapD2);
    // if (dot > (1.0)) {
    //     cout << 1 << endl;
    // }
    double result = acos(dot) * 180.0 / PI;
    // cout << result << endl;
    // printf("%f, %fdegrees\n", dot, result);
    cout << result << endl;

    return 0;
}
