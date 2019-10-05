#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int b[n];
    memset(b, 0, sizeof(b));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[i] += a[i][j];
        }
    }

    int maxi = b[0];
    int ind = 0;
    for (int i = 0; i < n; i++) {
        if (maxi < b[i]) {
            maxi = b[i];
            ind = i;
        }
    }
    cout << maxi << endl; 
    cout << ind;
    return 0;
}