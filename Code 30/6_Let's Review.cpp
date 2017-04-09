#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    int cnt;
    cin >> cnt;
    for (int i=0; i<cnt; i++) {
        cin >> s;
        for (int i=0; i<s.size(); i++){
            if (i%2==0){
                cout << s[i];
            }
        }
        cout << " ";
        for (int i=0; i<s.size(); i++){
            if (i%2!=0){
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
