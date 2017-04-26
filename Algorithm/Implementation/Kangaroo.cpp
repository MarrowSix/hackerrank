/*
 * 题意：两只袋鼠分别从两个位置（x1,x2），以速度（v1,v2）出发，问是否能够在某一跳后两只袋鼠位于同一位置
 */
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    
    string result;
    
    if (v1 == v2)
        result = "NO";
    else {
        int flag = (x1 - x2) / (v2 - v1);
        int time = (x1 - x2) % (v2 - v1);
        result = flag >= 0 && time == 0 ? "YES" : "NO";
    }
    
    cout << result << endl;
    return 0;
}
