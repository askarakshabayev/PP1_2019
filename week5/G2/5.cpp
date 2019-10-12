#include <iostream>

using namespace std;

int main() {
    int a;
    for (int64_t i = 0; i < 10000000000; i++) {
        a = 5;
    }
    cout << a;
    return 0;
}