#include <iostream>

using namespace std;

int sum(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << sum(n) - sum(k);
    return 0;
}