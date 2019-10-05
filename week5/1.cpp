#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    memset(a, 0, sizeof(a));
    a[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
     }
    return 0;
}