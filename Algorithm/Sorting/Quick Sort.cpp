#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void swap(int &numa, int &numb)
{
    int temp = numa;
    numa = numb;
    numb = temp;
}

void qSort(std::vector<int> &array, int l, int r)
{
    if (l >= r) {
        return;
    }
    int mid = array[r];
    int left = l, right = r-1;
    while (left < right) {
        while (array[left] < mid && left < right) {
            left++;
        }
        while (array[right] > mid && left < right) {
            right--;
        }
        swap(array[left], array[right]);
    }
    if (array[left] >= array[r]) {
        swap(array[left], array[r]);
    } else {
        left++;
    }
    if (left) {
        qSort(array, l, r-1);
    }
    qSort(array, l+1, r);
}

int main(int argc, char *argv[]) {
    int n;
    cin >> n;

    std::vector<int> v(n);

    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    qSort(v, 0, n-1);

    for (int i=0; i<n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
