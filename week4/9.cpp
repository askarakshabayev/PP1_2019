#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    // "as123de34tt7j8"
    // 1233478
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            cout << s[i];
        }
    }
    return 0;
}