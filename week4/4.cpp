#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int k, n, cnt = 0;

    cin >> n; // n = 5;
    // 2 3 5 6 4
    for (int x = 0; x < n; x++) {
        // --------------
        cin >> k;
        bool isPrime = true;
        for (int i = 2; i * i <= k; i++) {
            if (k % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true) {
            cnt++;
        }
        // --------------
    }
    cout << cnt;
    return 0;
}