#include <list>
#include <string>
#include <cstdio>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <regex>

using namespace std;


int main(){
    int N;
    cin >> N;
    string pattern(".+@gmail\\.com$$");
    regex r(pattern);
    list<string> firstName;

    for(int a0 = 0; a0 < N; a0++){
        string name, id;
        cin >> name >> id;
        if (regex_match(id, r)) {
            firstName.push_back(name);
        }
    }
    firstName.sort();
    for (list<string>::iterator it = firstName.begin(); it != firstName.end(); it++) {
        cout << *it << endl;
    }
    
    return 0;
}