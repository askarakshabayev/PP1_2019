// string
// a -> A, A -> a, + -> +

#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    // 'a' = 97, 'b' = 98, 'c' = 99
    // 'A' = 65
    // '0' = 48
    // ch = 'c' = 99 - 97 + 65 = 'C'
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 'a' + 'A';
    } else if (ch >= 'A' && ch <= 'Z') {
        ch = ch - 'A' + 'a';
    } 
    cout << ch;
    return 0;
}


