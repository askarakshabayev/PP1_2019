#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string s, t;
    int k = 0, p = 0;
    while (getline(cin, s)) {
        stringstream ss;
        ss << s;
        while (ss >> t) {
            p++;
        }
        k = k + 1;
    }
    cout << k << " " << p;
    return 0;
}