
#include <iostream>

using namespace std;

int maxi(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    int q, w;
    cin >> q >> w;
    cout << maxi(q, w);
    return 0;
}