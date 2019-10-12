#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int k = 1;
    // for (int i = 0; i < n; i++) {
    //     if (i % 2 == 0) {
    //         for (int j = 0; j < m; j++) {
    //             a[i][j] = k++;
    //         }
    //     } else {
    //         for (int j = m - 1; j >= 0; j--) {
    //             a[i][j] = k++;
    //         }
    //     }
    // }

    for (int c = 0; c < m; c++) {
        if (c % 2 == 0) {
            for (int r = 0; r < n; r++) {
                a[r][c] = k++;
            }
        } else {
            for (int r = n - 1; r >= 0; r--) {
                a[r][c] = k++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}