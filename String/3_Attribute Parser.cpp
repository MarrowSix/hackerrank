#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>
using namespace std;

class HRML{
public:
    HRML(vector<string>container, vector<string>queries);
    void RunQueries();

private:
    struct field{
        string tag;
        vector<pair<string, string>> attributes;

        field() : tag("") {}
    };

    void ParseLines(vector<string>begin);
    void ParseQueries(vector<string>end);

    vector<field> m_fields;
    vector<string> m_queries;
};

HRML::HRML(vector<string>container, vector<string>queries)
{
    ParseLines(container);
    // ParseQueries(queries);
    m_queries = queries;
}

void HRML::ParseLines(vector<string>begin)
{
    HRML::field tmpfield;
    string key, value;
    stringstream keys_values;
    char equals;

    auto match = smatch{};
    regex opening_line {R"(<(\w+)\s*(.*)>)"};
    regex closing_line {R"(<\/(\w+).*>)"};

    vector<string> opentags;
    int len = begin.size();

    for (int i=0; i<len; i++) {
        if (regex_match(begin[i], match, opening_line)) {
            if (opentags.empty()) {
                opentags.push_back(match[1].str());
                tmpfield.tag = match[1].str();
            } else {
                opentags.push_back(match[1].str());
                tmpfield.tag.erase();
                for (auto i : opentags) {
                    if (tmpfield.tag.empty()){
                        tmpfield.tag = i;
                    } else {
                        tmpfield.tag = tmpfield.tag + "." + i;
                    }
                }
            }

            tmpfield.attributes.clear();
            keys_values.clear();

            keys_values << match[2].str();

            while (keys_values >> key >> equals >> value) {
                value.erase(remove(value.begin(), value.end(), '"'), value.end());
                tmpfield.attributes.push_back(pair<string, string>(key, value));
            }
            m_fields.push_back(tmpfield);
        }

        if (regex_match(begin[i], match, closing_line)) {
            if (match[1].str() == opentags.back()) {
                opentags.pop_back();
            } else {
                m_fields.clear();           //Invalid input
                break;
            }
        }
    }

}

void HRML::RunQueries()
{
    bool found;
    auto match = smatch{};
    regex query { R"((.*)~(.*))"};
    for (auto i : m_queries) {
        found = false;
        if (regex_match(i, match, query)) {
            for (auto j : m_fields) {
                if (match[1].str() == j.tag) {
                    for (auto k : j.attributes) {
                        if (k.first == match[2].str()) {
                            found = true;
                            cout << k.second << endl;
                            break;
                        }
                    }
                    break;
                }
            }
        }
        if (!found) {
            cout << "Not Found!" << endl;
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N, Q;
    vector<string>container, queries;
    cin >> N >> Q;
    cin.ignore(1, '\n');
    string ss;
    for (int i=0; i<N; i++) {
        getline(cin, ss);
        //cout << ss << " ";
        container.push_back(ss);
    }
    //cout << endl;
    for (int i=0; i<Q; i++) {
        getline(cin, ss);
        //cout << ss << " ";
        queries.push_back(ss);
    }
    //cout << endl;
    HRML myHRML(container, queries);
    myHRML.RunQueries();

    return 0;
}