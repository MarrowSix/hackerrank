#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    // your code goes here
    sort(a, a+n);
    int minimum = abs(a[0]-a[1]);
    for (int i=1; i<n; i++) {
        minimum = minimum < abs(a[i]-a[i+1]) ? minimum : abs(a[i]-a[i+1]);
    }
    cout << minimum << endl;
    return 0;
}
