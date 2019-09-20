#include <iostream>

using namespace std;

int main() {
    int n, f = 1;
    cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     f = f * i;
    // }
    int i = 1;
    while (i <= n) {
        f *= i;
        i++;
    }
    cout << f;
    return 0;
}