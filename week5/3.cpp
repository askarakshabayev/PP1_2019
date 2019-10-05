#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int b[n];
    memset(b, 0, sizeof(b));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int maxi = a[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (maxi <= a[i][j]) {
                maxi = a[i][j];
            }
        }
    }
    cout << maxi << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (maxi == a[i][j]) {
                cout << i << " " << j << endl;
            }
        }
    }

    // for (int i = 0; i < n; i++) {
    //     cout << b[i] << " ";
    // }

    // int maxi = b[0];
    // int row = 0;
    // for (int i = 0; i < n; i++) {
    //     if (maxi < b[i]) {
    //         maxi = b[i];
    //         row = i;
    //     }
    // }

    // cout << maxi << endl;
    // cout << row << " ";

    // int col = 0;
    // for (int i = 0; i < m; i++) {
    //     if (a[row][i] == maxi) {
    //         col = i;
    //         break;
    //     }
    // }
    // cout << col;
    return 0;
}