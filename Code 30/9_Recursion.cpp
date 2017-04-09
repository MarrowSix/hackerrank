#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int i)
{
    if (i <= 1) {
        return 1;
    } else {
        return factorial(i-1) * i;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    while (cin >> n) {
        cout << factorial(n) << endl;
    }
    return 0;
}
