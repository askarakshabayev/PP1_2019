// s.substr(index, length)
// s.erase(index, lenght)

#include <iostream>

using namespace std;

int main() {
    // abcdefghijklmn
    string s;
    cin >> s;
    // cout << s.substr(2, 4);
    s.erase(2, 4);
    cout << s;
    return 0;
}