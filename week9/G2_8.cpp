#include <iostream>

using namespace std;

int sum(int n) {
    int t = 0;
    while (n > 0) {
        t += n % 10;
        n /= 10;
    }
    return t;
}

int main() {    
    int n;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max_sum = sum(a[0]);
    int max_ind = 0;
    for (int i = 1; i < n; i++) {
        if (sum(a[i]) > max_sum) {
            max_sum = sum(a[i]);
            max_ind = i;
        }
    }    
    cout << a[max_ind];
    return 0;
}