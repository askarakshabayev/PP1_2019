#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int k = 0;
    for (int j = 0; j < m; j++) {
        int r = 0;
        int c = j;
        while (r < n && c >= 0) {
            a[r][c] = k;
            k++;
            r++;
            c--;
        }
    }

    for (int i = 1; i < n; i++) {
        int r = i;
        int c = m - 1;
        while (r < n && c >= 0) {
            a[r][c] = k;
            k++;
            r++;
            c--;
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