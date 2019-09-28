#include <iostream>

using namespace std;
// 5 2
// 5 3 6 2 8
// -1

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // i = 0
    int ind = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            ind = i;
            break;
        } 
    }
    
    if (ind != -1) {
        for (int i = ind; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }    

    return 0;
}