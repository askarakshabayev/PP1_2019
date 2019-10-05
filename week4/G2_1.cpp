#include <iostream>

using namespace std;

int main() {
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxi = a[0];
    int ind = 0;
    for (int i = 0; i < n; i++) {
        if (maxi < a[i]) {
            maxi = a[i];
            ind = i;
        }
    }
    cout << maxi << endl;
    cout << ind;
    return 0;
}