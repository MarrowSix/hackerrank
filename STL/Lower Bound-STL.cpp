/*
 * 题意：输入n个数，和q个查询，查找给定数字在数组中第一次出现的位置
 * 如果不存在，则输出第一比它大的数字的位置（从1开始算）
 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, Q;
    cin >> N;
    
    vector<int> array(N);
    for (int i=0; i<N; i++) {
        cin >> array[i];
    }
    
    sort(array.begin(), array.end());
    cin >> Q;
    for (int i=0; i<Q; i++) {
        int number;
        cin >> number;
        int low = lower_bound(array.begin(), array.end(), number) - array.begin();
        if (low < N) {
            if (array[low] == number) {
                cout << "Yes " << (low + 1) << endl;
            } else {
                cout << "No " << (low + 1) << endl;
            }
        }
        
    }
    return 0;
}
