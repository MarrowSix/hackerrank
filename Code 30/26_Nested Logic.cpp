#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Da, Ma, Ya;
    int De, Me, Ye;
    int fine = 0;

    cin >> Da >> Ma >> Ya;
    cin >> De >> Me >> Ye;
    
    if (Ya > Ye) {
        fine = 10000;
    } else if (Ma > Me) {
        fine = 500 * (Ma - Me);
    } else if (Da > De) {
        fine = 15 * (Da - De);
    } else {
        fine = 0;
    }
    cout << fine << endl;
    return 0;
}
