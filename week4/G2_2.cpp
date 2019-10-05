#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    int a[n];
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

    //cout << ind;
    for (int i = ind; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}