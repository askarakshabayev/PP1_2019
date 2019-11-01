#include <iostream>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    // int n;
    // cin >> n;
    // if (isPrime(n) == true) {
    //     cout << "YES";
    // } else {
    //     cout << "NO";
    // }

    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (isPrime(i) == true) {
            cout << i << " ";
        }
    }

    return 0;
}