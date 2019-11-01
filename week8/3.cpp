#include <iostream>

using namespace std;

int f(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n, k;
    cin >> n >> k; // 5 3
    cout << f(n) / (f(k) * f(n - k));
    return 0;
}
