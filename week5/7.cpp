#include <iostream>

using namespace std;

int main() {
    freopen("7.in", "r", stdin);
    freopen("7.out", "w", stdout);
    string s1, s2, s3;
    
    if (cin >> s1) {
        cout << "Read " << s1 << endl;
    } else {
        cout << "No" << endl;
    }

    if (cin >> s2) {
        cout << "Read " << s2 << endl;
    } else {
        cout << "No" << endl;
    }

    if (cin >> s3) {
        cout << "Read " << s3 << endl;
    } else {
        cout << "NO";
    }
    // s1 = abc
    // s2 = cds
    
    return 0;
}