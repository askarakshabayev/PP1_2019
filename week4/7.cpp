#include <iostream>

using namespace std;

int main() {
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxi = a[0];
    int mini = a[0];
    int ind_maxi = 0;
    int ind_mini = 0;
    for (int i = 1; i < n; i++) {
        if (maxi < a[i]) {
            maxi = a[i];
            ind_maxi = i;
        }
        if (mini > a[i]) {
            mini = a[i];
            ind_mini = i;
        }
    } 
    cout << maxi << " " << mini;
    return 0;
}