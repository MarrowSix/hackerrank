#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    std::vector<int> v;
    int cnt;
    cin >> cnt;

    for (int i=0; i<cnt; i++) {
    	int number;
    	cin >> number;
    	v.push_back(number);
    }
    sort(v.begin(), v.end());
    for (int i=0; i<cnt; i++) {
    	cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
