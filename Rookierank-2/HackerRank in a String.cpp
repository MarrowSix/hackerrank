#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    string hc = "hackerrank";
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // your code goes here
        int len = s.size(), cnt = 0;
        //char ch = hc[cnt];
        for (int i=0; i<len; i++) {
            if (s[i] == hc[cnt]) {
                cnt++; 
            }
        }
        if (cnt == hc.size()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
