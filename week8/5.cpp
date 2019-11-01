#include <iostream>

using namespace std;

void print(int k) {
    for (int i = 1; i <= k; i++) {
        cout << k << " ";
    }
    cout << endl;
}

int main() {
    // 2
    // 3
    // 5
    // 3 3 3
    // 5 5 5 5 5
    int n, k;
    cin >> n; // n = 2
    for (int i = 0; i < n; i++) {
        cin >> k; // k = 5
        print(k);
    }
    return 0;
}