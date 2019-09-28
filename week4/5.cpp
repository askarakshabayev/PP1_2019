#include <iostream>

using namespace std;

int main() {
    int a, b, result;
    cin >> a >> b;
    // 6 8
    // i = 3 
    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            result = i;
        }
    }
    cout << result;
    return 0;
}