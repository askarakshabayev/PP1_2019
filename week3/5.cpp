#include <iostream>

using namespace std;

int main() {
    int s = 0, a;
    // 1 4 3 0
    // s = 1 + 4 + 3 + 0
    // a = 4
    // do {
    //     cin >> a;
    //     s += a;
    // } while (a != 0);

    while ((cin >> a) && a > 0) {
        s += a;
    }

    return 0;
}