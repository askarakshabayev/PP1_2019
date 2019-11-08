#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> a(4, 8), b;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
    a.pop_back();
    a.pop_back();

    a.insert(a.begin() + 3, 12);
    a.erase(a.begin() + 2);
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    return 0;
}