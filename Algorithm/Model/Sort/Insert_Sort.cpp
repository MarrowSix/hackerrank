#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    std::vector<int> array;
    int num, n;

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> num;
        array.push_back(num);
    }
    int len = array.size();

    int k = 0, back = len - 1;
    while (k < len - 1) {
        for (int i=0; i<=k; i++) {
            int temp = array[back];
            if (array[back] < array[i]) {
                // int temp = array[back];
                for (int j=len-1; j>=i+1; j--) {
                    array[j] = array[j-1];
                }
                array[i] = temp;
                break;
            } else if (i==k && array[back] >= array[i]) {
                // int temp = array[back];
                for (int j=len-1; j>=i+2; j--) {
                    array[j] = array[j-1];
                }
                array[k+1] = temp;
                // break;
            }
        }
        k++;
    }

    for (int i=0; i<len; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
