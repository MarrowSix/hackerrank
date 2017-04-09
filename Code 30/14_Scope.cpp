#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
	vector<int> elements;

public:
	int maximumDifference;
	Difference(vector<int> v) :
	elements(v)
	{}

	void computeDifference()
	{
		int len = elements.size();
		int min = 200, max = -1;
		for (int i=0; i<len; i++) {
			if (elements[i] > max) {
				max = elements[i];
			}
			if (elements[i] < min) {
				min = elements[i];
			}
		}
		maximumDifference = max - min;
	}
};

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}