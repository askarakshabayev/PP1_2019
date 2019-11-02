#include <iostream>
#include <cmath>

using namespace std;

int mini(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main() {
    // sqrt, abs, min, max
    int a, b;
    cin >> a >> b;
    int c = mini(a, b);
    cout << c;
    return 0;
}