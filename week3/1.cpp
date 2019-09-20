#include <iostream>

using namespace std;

int main() {    
    int n;
    cin >> n;
    // i = 1
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            continue;
        }
        cout << i << " ";
    }

    // n = 10;
    // i = 1
    // 0 1 2 3 4 5 6 7 8 9
    // int i = 0;
    // for (;;) {
    //     cout << i << " ";
    //     i++;
    //     if (i == 10) {
    //         break;
    //     }
    // }
    // while (/* condition */)
    // {
    //     /* code */
    // }

    // do {

    // } while (/* codition */);
    
    return 0;
}