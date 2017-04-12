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
    vector<long int> arrary;
    int num;

    for (int i=0; i<5; i++) {
        cin >> num;
        arrary.push_back(num);
    }

    sort(arrary.begin(), arrary.end());
    cout << (arrary[0] + arrary[1] + arrary[2] + arrary[3]) << " " << (arrary[1] + arrary[2] + arrary[3] + arrary[4]) << endl;

    return 0;
}
