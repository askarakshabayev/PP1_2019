#include <iostream>

using namespace std;

void hanoi(int a, int b, int c, int k) {
    if (k == 1)
        cout << a << " -> " << c << endl;
    else {
        hanoi(a, c, b, k - 1);
        cout << a << " -> " << c << endl;
        hanoi(b, a, c, k - 1);
    }
}

int main() {
    int k;
    cin >> k;
    hanoi(1, 2, 3, k);
    return 0;
}