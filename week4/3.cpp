// k = a * 10, b * 25, c * 5, d * 100
// k / 100
// k % 100

#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, k;
    cin >> a >> b >> c >> d;
    k = a * 10 + b * 25 + c * 5 + d * 100;
    cout << k / 100 << " " << k % 100;
    return 0;
}