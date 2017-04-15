#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
#include <vector>
using namespace std;
void insertionSort(int ar_size, int *  ar) {
    for(int i = 1; i < ar_size; ++i)
    {
        int value = ar[i];
        int temp  = i;
        while (temp > 0 && ar[temp  - 1] > value){
            ar[temp] =  ar[temp - 1];
            temp = temp - 1;
        }
        ar[temp] = value;
        for(int k = 0; k < ar_size; ++k){
            cout << ar[k] << " ";
        }
        cout << endl;
    }
}
int main(void) {
   
    int size;
    cin >> size;
    int array[size];
    
    for (int i=0; i<size; i++) {
        cin >> array[i];
    }
    insertionSort(size, array);
   
   return 0;
}
