/*
 *　题意：输出插入排序中发生数据移动次数
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void insertSortion(int size, int* array)
{
    int count = 0;
    for (int i=1; i<size; i++) {
        int temp = array[i];
        int j=i-1;
        
        while (j>=0 && temp<array[j]) {
            array[j+1] = array[j];
            j--;
            count++;
        }
        array[j+1] = temp;
    }
    
    cout << count << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin >> size;
    
    int array[size];
    for (int i=0; i<size; i++) {
        cin >> array[i];
    }
    
    insertSortion(size, array);
    
    return 0;
}
