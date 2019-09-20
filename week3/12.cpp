#include <iostream>

using namespace std;

int main() {
    int a[100];
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> k;
    int ind = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            ind = i;
            break;
        }
    }
    // n = 5
    // 4 2 1 6 6
    // ind = 2
    // i = 3
    n--;
    for (int i = ind; i < n; i++)
        a[i] = a[i + 1];

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}