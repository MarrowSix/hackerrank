#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Maximum common divisor
int gcd(int a, int b)
{
    int ret;
    while (b) {
        ret = a % b;
        a = b;
        b = ret;
    }
    return (a);
}

// Minimum common multiple
int lcm(int a, int b)
{
    int m = a*b;
    int ret = gcd(a, b);
    ret = m / ret;
    return ret;
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
    }

    int lcmn = a[0];
    for (int i=1; i<n; i++) {
        lcmn = lcm(lcmn, a[i]);
    }
    int gcdn = b[0];
    for (int i=1; i<m; i++) {
        gcdn = gcd(gcdn, b[i]);
    }
    int count = 0;
    for (int i=lcmn; i<=gcdn; i+=lcmn) {
        if (gcdn % i == 0) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
