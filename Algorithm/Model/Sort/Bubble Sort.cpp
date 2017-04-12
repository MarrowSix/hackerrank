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
    for (int i=0; i<len-1; i++) {
        for (int j=0; j<len-i-1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for (int i=0; i<len; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
