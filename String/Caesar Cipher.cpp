#include <cmath>
#include <cstdio>
#include <cctype>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;

    for (int i=0; i<n; i++) {
        if (isupper(s[i])) {
            s[i] =  (s[i] - 'A' + k) % 26 + 'A';
        } else if (islower(s[i])) {
            s[i] =  (s[i] - 'a' + k) % 26 + 'a';
        }
    }

    cout << s << endl;

    return 0;
}
