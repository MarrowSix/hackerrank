#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
	// start and end point of home
	int s;
	int t;
	cin >> s >> t;
	// location of apple and orange tree
	int a;
	int b;
	cin >> a >> b;
	// count of apples and oranges
	int m;
	int n;
	cin >> m >> n;
	vector<int> apple(m);
	for (int apple_i = 0; apple_i < m; apple_i++) {
		cin >> apple[apple_i];
	}
	vector<int> orange(n);
	for (int orange_i = 0; orange_i < n; orange_i++) {
		cin >> orange[orange_i];
	}

	int cntApple = 0, cntOrange = 0;
	for (int apple_i = 0; apple_i < m; apple_i++) {
		int location = a + apple[apple_i];
		if (location <= t && location >= s)
			cntApple++;
	}

	for (int orange_i = 0; orange_i < n; orange_i++) {
		int location = b + orange[orange_i];
		if (location <= t && location >= s)
			cntOrange++;
	}
	cout << cntApple << endl << cntOrange << endl;
	return 0;
}
