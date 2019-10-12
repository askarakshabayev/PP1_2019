// cabdabkablllllab ab
// cdklllll

#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    while (s1.find(s2) != string::npos) {
        int pos = s1.find(s2);
        s1.erase(pos, s2.size());
    }
    cout << s1;
    return 0;
}