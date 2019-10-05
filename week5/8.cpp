#include <iostream>

using namespace std;

int main() {
    freopen("7.in", "r", stdin);
    freopen("7.out", "w", stdout);
    string s;
    int cnt = 0;
    while (getline(cin, s)) {
        cnt++;
    }    
    cout << cnt;
    return 0;
}