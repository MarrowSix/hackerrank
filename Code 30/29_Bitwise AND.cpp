#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n, k;
        cin >> n >> k;
        int re = -1;
        for (int i=1; i<n; i++) {
            for (int j=i+1; j<=n; j++) {
                int re = (i & j);
                if (re < k && re > max) {
                    max = re;
                }
            }
        }
    }
    return 0;
}