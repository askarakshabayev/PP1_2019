#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    pair<int, int> p[10];
    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        p[i] = make_pair(x, y);
    }
    sort(p, p + n);

    for (int i = 0; i < n; i++) {
        cout << p[i].first << " " << p[i].second << endl;
    }
    return 0;
}