#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    set<int> sets;
    cin >> n;
    for (int i=0; i<n; i++) {
        int x, y;
        cin >> x >> y;
        switch (x) {
            case 1:
                sets.insert(y);
                break;
            case 2:
                sets.erase(y);
                break;
            case 3:
                cout << (sets.find(y) == sets.end() ? "No" : "Yes") << endl;
                break;
        }
    }
    return 0;
}
