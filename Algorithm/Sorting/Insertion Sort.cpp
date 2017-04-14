#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int> _ar) {
    
    int _ar_size = _ar.size();
    int temp = _ar[_ar_size-1];
    for (int _ar_i=0; _ar_i<_ar_size-1; _ar_i++) {
        if (temp < _ar[_ar_i]) {
            for (int i=_ar_size-1; i>_ar_i; i--) {
                _ar[i] = _ar[i-1];
                for (int j=0; j<_ar_size; j++) {
                    cout << _ar[j] << " ";
                }
                cout << endl;
            }
            _ar[_ar_i] = temp;
            for (int j=0; j<_ar_size; j++) {
                cout << _ar[j] << " ";
            }
            cout << endl;
            break;
        }
    }
}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}

