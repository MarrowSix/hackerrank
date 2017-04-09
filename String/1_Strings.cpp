#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    //Complete the program
    string sa, sb;
    cin >> sa >> sb;
    cout << sa.size() << " " << sb.size() << endl;
    cout << sa + sb << endl;
    char c = sa[0];
    sa[0] = sb[0];
    sb[0] = c;
    cout << sa << " " << sb << endl;    
    return 0;
}