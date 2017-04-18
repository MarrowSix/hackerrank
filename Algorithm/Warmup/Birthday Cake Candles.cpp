#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> height(n);
    
    for(int height_i = 0;height_i < n;height_i++){
       cin >> height[height_i];
    }
    
    sort(height.begin(), height.end());
    
    int k = 1, i = 1;
    while (height[n-1] == height[n-1-i]) {
        k++;
        i++;
    }
    
    cout << k << endl;
    
    return 0;
}

