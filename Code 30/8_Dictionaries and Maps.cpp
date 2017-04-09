#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <hash_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map <string, string> Map;
    int cnt;
    cin >> cnt;
    string a, b;
    for (int i=0; i<cnt; i++) {
        cin >> a >> b;
        Map[a] = b;
    }
    while (cin >> a) {
        if (Map.find(a) != Map.end()) {
            cout << a << "=" << Map[a] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
