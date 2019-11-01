#include <iostream>
#include <sstream>

using namespace std;
// abc    def fff
int word_cnt(string s) {
    int k = 0;
    stringstream ss;
    ss << s;
    while (ss >> s) {
        k++;
    }
    return k;
}

int main() {
    int cnt1 = 0; // count of words
    int cnt2 = 0; // count of lines
    string s;
    while (getline(cin, s)) {
        cnt2++;
        cnt1 += word_cnt(s);
    }
    cout << cnt2 << " " << cnt1;
    return 0;
}