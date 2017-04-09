#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int number;
    bool flag = true;
    cin >> number;
    
    if (number > 1){
        if (number % 2 == 0) {
            flag = false;
        } else {
            for (int i=2; i<number; i++) {
                if (number % i == 0) {
                    flag = false;
                    break;
                }
            }
        }
    } else {
        flag = false;
    }
    if (flag) {
        cout << "Not prime" << endl;
    } else {
        cout << "Prime" << endl;
    }
    return 0;
}
