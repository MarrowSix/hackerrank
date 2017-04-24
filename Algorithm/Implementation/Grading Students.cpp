/*
 * 题意：对学生成绩四舍五入，如果四舍五入之后的结果还是小于40，
 * 则不进行四舍五入。
 * topic : 题目所给的默认模板是错的。
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using namespace std;

void solve(vector<int> grades) {
	// Complete this function
	int len = grades.size();
	int cnt = 0;
    for (int i = 0; i < len; i++) {
		int count = (grades[i] / 5) == 0 ? (grades[i] / 5) : ((grades[i] / 5) + 1);
		int num = count * 5;
		num = (num - grades[i]) < 3 ? num : grades[i];
		if (num >= 40 && grades[i] != 40) {
			grades[i] = num;
            cnt++;
		}
	}
    for (int i=0; i<len; i++) {
        cout << grades[i] << endl;
    }
    
}

int main() {
	int n;
	cin >> n;
	vector<int> grades(n);
	for (int grades_i = 0; grades_i < n; grades_i++) {
		cin >> grades[grades_i];
	}
    solve(grades);
	//int result = solve(grades);
	//cout << result << endl;
	return 0;
}
