#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int v, size;
    
    cin >> v >> size;
    int array[size];
    
    int temp = -1;
    for (int i=0; i<size; i++) {
        cin >> array[i];
        if (array[i] == v) {
            temp = i;
        }
    }
    
    cout << temp << endl;
    return 0;
}
