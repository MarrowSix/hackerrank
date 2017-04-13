#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binsearch(std::vector<int> array, int target)
{
    int left = 0, right = array.size()-1;
    int mid;
    while (left < right) {
        mid = (left + right) / 2;
        if (target == array[mid]) {
            return mid;
        } else if (target < array[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int binsearch(std::vector<int> array, int left, int right, int target)
{
    if (left < right) {
        int mid = (left + right) / 2;
        if (target == array[mid]) {
            return mid;
        } else if (target < array[mid]) {
            return binsearch(array, left, mid - 1, target);
        } else {
            return binsearch(array, mid + 1, right, target);
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int n, num, target;
    cin >> n >> target;

    std::vector<int> array;
    for (int i=0; i<n; i++) {
        cin >> num;
        array.push_back(num);
    }
    sort(array.begin(), array.end());


    return 0;
}
