#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    
    while (cin >> n) {
        int max = 0, np = 0;
        int front = 0;
        int counter = 0;
        while (n != 0) {
            np = n % 2;
            n = n / 2;
            if ((np == front && front == 1) || (np == 1 && front == 0)) {
                counter++;
            } else {
                counter = 0;
            }
            front = np;
            if (max < counter) {
                max = counter;
            }
        }
        cout << max << endl;
    }

    return 0;
}