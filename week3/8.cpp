#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int t = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            cout << i << " ";
            t++;
        }
    }
    cout << endl << t;    
    return 0;
}