#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // n = 12 => 1100 => 0011 => 3
    // 1100
    // 110
    // n = 11(2)
    // n = 1
    int n;
    cin >> n;
    int a = (n % 2) * pow(2, 3);
    n /= 2;
    int b = (n % 2) * pow(2, 2);
    n /= 2;
    int c = (n % 2) * pow(2, 1);
    n /= 2;
    // int d = (n % 2) * 1;
    cout << a + b + c + n;
    return 0;
}