// abcba - YES
// abc   - NO

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool isPalin = true;
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1])
            isPalin = false;
    }

    if (isPalin == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}