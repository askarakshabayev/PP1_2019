// s.find(string)
// helloworld llo
#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.find(s2) == string::npos) {
        cout << "NO";
    } else {
        cout << s1.find(s2);
    }

    return 0;
}