#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<pair<int, int> > a;
int n, x, y;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        a.push_back(make_pair(x, y));
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
        cout << a[i].first << " " << a[i].second << endl;
    return 0;
}