#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct info{
    info() : type(0), count(0) {}
    int type;
    int count;
};

bool cmp(const info a, const info b) {
    return (a.count < b.count);
}

int main(int argc, char *argv[]) {
    int n;
    cin >> n;
    std::vector<int> type(n);
    std::vector<info> result(6);

    for (int i=0; i<n; i++) {
        cin >> type[i];
        // int a = type[i];
        result[type[i]].count++;
        result[type[i]].type = type[i];
    }

    sort(result.begin(), result.end(), cmp);
    int cur = result.size() - 1;
    while (cur-1 >= 1 && result[cur].count == result[cur-1].count) {
        cur--;
    }
    cout << result[cur].type << endl;

    return 0;
}
