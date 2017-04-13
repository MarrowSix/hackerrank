#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, num;
    std::vector<int> array;

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> num;
        array.push_back(num);
    }

    for (int i=0; i<n; i++) {
        int temp = i;
        for (int j=i+1; j<n; j++) {
            if (array[j] < array[i]) {
                temp = j;
            }
        }
        int mod = array[temp];
        array[temp] = array[i];
        array[i] = mod;
    }

    for (int i=0; i<n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    return 0;
}
