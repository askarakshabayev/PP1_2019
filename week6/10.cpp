#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() > s2.size())
        cout << 1 << endl;
    else if (s1.size() < s2.size())
        cout << 2 << endl;
    else if (s1 == s2)
        cout << 3 << endl;
    else {
        if (s1 < s2)
            cout << 2;
        else
            cout << 1;
    } 
    return 0;
}