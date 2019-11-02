#include <iostream>

using namespace std;

int f(int n) {
    int p = 1;
    for (int i = 1; i <= n; i++)
        p = p * i;
    return p;
}

int main() {
    int n, k;
    cin >> n >> k; // 5 2
    int f1 = f(n); // f(5)
    int f2 = f(k); // f(2)
    int f3 = f(n - k); // f(3)
    cout << f1 / (f2 * f3);
    

    // for (int i = 1; i <= n; i++)
    //     f1 = f1 * i;
    
    // for (int i = 1; i <= k; i++)
    //     f2 = f2 * i;

    // for (int i = 1; i <= (n - k); i++)
    //     f3 = f3 * i;

    // cout << f1 / (f2 * f3);
    return 0;
}