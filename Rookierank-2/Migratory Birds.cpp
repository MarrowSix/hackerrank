#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> types(n);
    for(int types_i = 0; types_i < n; types_i++){
       cin >> types[types_i];
    }
    // your code goes here
    int type1=0, type2=0, type3=0, type4=0, type5=0;
    int max = -1, maxnumber = types[0];
    for (int i=0; i<n; i++) {
        if (types[i]==1) {
            type1++;
            if (max == type1) {
                maxnumber = maxnumber < types[i] ? maxnumber : types[i];
            } else if (max < type1) {
                max = type1;
                maxnumber = types[i];
            }
        } else if (types[i]==2) {
            type2++;
            if (max == type2) {
                maxnumber = maxnumber < types[i] ? maxnumber : types[i];
            } else if (max < type2) {
                max = type2;
                maxnumber = types[i];
            }
        } else if (types[i]==3) {
            type3++;
            if (max == type3) {
                maxnumber = maxnumber < types[i] ? maxnumber : types[i];
            } else if (max < type3) {
                max = type3;
                maxnumber = types[i];
            }
        } else if (types[i]==4) {
            type4++;
            if (max == type4) {
                maxnumber = maxnumber < types[i] ? maxnumber : types[i];
            } else if (max < type4) {
                max = type4;
                maxnumber = types[i];
            }
        } else if (types[i]==5) {
            type5++;
            if (max == type5) {
                maxnumber = maxnumber < types[i] ? maxnumber : types[i];
            } else if (max < type5) {
                max = type5;
                maxnumber = types[i];
            }
        }
    }
    cout << maxnumber << endl;
    return 0;
}
