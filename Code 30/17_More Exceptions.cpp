#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>

using namespace std;
//Write your code here

class Calculator{
    private:
        int n, p;
    public:
        Calculator(){
            n = 0;
            p = 0;
        }
        ~Calculator(){}
        int power(int a, int b){
            int mul = 1;
            if (a < 0 || b < 0) {
                throw runtime_error("n and p should be non-negative");
            }
            for (int i=0; i<b; i++) {
                mul *= a;
            }
            return mul;
        }
};

int main()
{
    Calculator myCalculator = Calculator();
    int T, n, p;
    cin >> T;
    while (T-- > 0) {
        if (scanf("%d %d", &n, &p) == 2) {
            try {
                int ans = myCalculator.power(n, p);
                cout << ans << endl;
            }
            catch (exception &e) {
                cout << e.what() << endl;
            }
        }
    }
}