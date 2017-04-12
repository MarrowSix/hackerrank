#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int type;
    string name;
    int mark;
    cin >> n;

    map<string, int> content;

    for (int i=0; i<n; i++) {
        cin >> type;
        if (type == 1) {
            cin >> name >> mark;
            if (content.find(name) == content.end()) {
                content[name] = mark;
            } else {
                content[name] += mark;
            }
        } else if (type == 2) {
            cin >> name;
            content.erase(name);
        } else if (type == 3) {
            cin >> name;
            if (content.find(name) != content.end()) {
                cout << content[name] << endl;
            } else {
                cout << "0" << endl;
            }
        }
    }
    return 0;
}
