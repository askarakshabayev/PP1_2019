#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << i << " " << a[i] << endl;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            cout << a[i] << " ";
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0)
            sum++;
    }

    return 0;
}