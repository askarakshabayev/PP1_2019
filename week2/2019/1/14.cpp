#include <iostream>

using namespace std;

int main() {
    /*
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
        }
    }
    */
    // n = 15 => 1, 3, 5, 15
    
    int n, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            s++;
        }
    }
    cout << s << endl;
    return 0;
}