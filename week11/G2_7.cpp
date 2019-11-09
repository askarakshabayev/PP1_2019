#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, x;
    set<int> a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.insert(x);
    }
    cout << a.size();
    set<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}