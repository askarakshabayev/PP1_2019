#include <iostream>

using namespace std;

int f(int n) {
    if (n == 0 || n == 1)
        return 1;
    return f(n - 1) * n;
}

int main() {
    int n;
    cin >> n;
    int fl = f(n);
    cout << fl;
    return 0;
}