#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b)
            a = a % b;
        else 
            b = b % a;
    }
    return a + b;
}

int l(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;
    int c = l(a, b); // 32 24
    cout << c;
    return 0;
}