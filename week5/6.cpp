#include <iostream>

using namespace std;

int main() {
    freopen("6.in", "r", stdin); // read
    freopen("6.out", "w", stdout); // write
    string s;
    // cin >> s;
    getline(cin, s);
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') 
            cnt++;
    }

    cout << cnt + 1;
    return 0;
}