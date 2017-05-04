#include <iostream>
#include <vector>
using namespace std;

int Max(int a, int b, int c)
{
	return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

int subSequence(vector<int> &list, int left, int right)
{
	int maxLeftSum = 0, maxRightSum = 0;
	int maxLeftBorderSum = 0, maxRightBorderSum = 0;

	int leftBorderSum = 0, rightBorderSum = 0;
	int mid;

	if (left == right) {
		return list[left] > 0 ? list[left] : 0;
	}

	mid = (left + right) / 2;
	maxLeftSum = subSequence(list, left, mid);
	maxRightSum = subSequence(list, mid + 1, right);

	for (int i = mid; i >= left; i--) {
		leftBorderSum += list[i];
		if (leftBorderSum > maxLeftBorderSum) {
			maxLeftBorderSum = leftBorderSum;
		}
	}

	for (int i = mid + 1; i <= right; i++) {
		rightBorderSum += list[i];
		if (rightBorderSum > maxRightBorderSum) {
			maxRightBorderSum = rightBorderSum;
		}
	}

	return Max(maxLeftSum, maxRightSum, (maxLeftBorderSum + maxRightBorderSum));
}

int maxSubsquence2(vector<int> list) {
	int maxSum = 0;
	int curMaxSum = 0;
	for (int i = 0; i < list.size(); i++) {
		curMaxSum += list[i];
		if (curMaxSum > maxSum) {
			maxSum = curMaxSum;
		}
		if (curMaxSum < 0) {
			curMaxSum = 0;
		}
	}
	return maxSum;
}

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << subSequence(arr, 0, arr.size() - 1) << endl;
	//cout << maxSubsquence2(arr) << endl;

	return 0;
}
