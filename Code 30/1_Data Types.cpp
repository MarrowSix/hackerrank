#include <iostream>
#include <limits>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int i=4;
    double d = 4.0;
    string s = "HackerRank";

    int number;
    double dnumber;
    string str;
    cin >> number >> dnumber;
    
    
    cin.get();
    getline(cin, str);

    cout << number + i << endl;
    if ( ((dnumber + d) - int(dnumber + d)) < 0.00001 ) {
        cout << fixed << setprecision(1) << d + dnumber << endl; 
    } else {
        cout << d + dnumber << endl;
    }
    // if (dsum)
    // cout << fixed << setprecision(1) << d + dnumber << endl;
    // cout << isum << " " << dsum << endl;
    // cout << str << endl;
    cout << s + " " + str << endl;

    return 0;
}