#include <iostream>

using namespace std;

int main() {

    // i = 1, 2
    // j = 0
    // k = 0
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                if ((i + j + k) % 3 == 0)
                    cout << i << j << k << endl;
            }
        }
    }
    return 0;
}