#include <iostream>

using namespace std;

int main() {
    int a[10000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mini = a[0];
    int maxi = a[0];
    int ind_mini = 0;
    int ind_maxi = 0;
    for (int i = 1; i < n; i++) {
        if (mini > a[i]) {
            mini = a[i];
            ind_mini = i + 1;
        }
        if (maxi < a[i]) {
            maxi = a[i];
            ind_maxi = i + 1;
        }
    }
    cout << mini << " " << ind_mini << endl;
    cout << maxi << " " << ind_maxi << endl;
    
    return 0;
}