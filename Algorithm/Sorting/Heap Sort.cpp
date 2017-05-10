#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void maxHeapify(std::vector<int> &v, int index, int bound)
{
    int left = index*2 + 1;

    while (left < bound) {
        if (left + 1 < bound && v[left] < v[left+1])
            left++;
        if (v[left] < v[index])
            return;
        else {
            swap(v[left], v[index]);
            index = left;
            left = index * 2 + 1;
        }
    }
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;

    std::vector<int> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }

    for (int i=n/2 - 1; i>=0; i--) {
        maxHeapify(v, i, v.size());
    }
    for (int i=v.size()-1; i>0; i--) {
        swap(v[i], v[0]);
        maxHeapify(v, 0, i);
    }
    for (auto num : v) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
