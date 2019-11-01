#include <iostream>

using namespace std;

int main() {
    string s = "abcdef";
    s.append("qqqqq");
    s.insert(2, "qqqq");
    cout << s;
    return 0;
}