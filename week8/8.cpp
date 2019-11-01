#include <iostream>

using namespace std;

int a[1000];

int f(int n) {
    if (a[n] > 0) {
        return a[n];
    }
    if (n == 0 || n == 1)
        return 1;
    a[n] = f(n - 1) + f(n - 2);
    return a[n];
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}