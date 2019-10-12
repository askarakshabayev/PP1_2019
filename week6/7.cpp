#include <iostream>

using namespace std;

int main() {
    
    string s1, s2;
    cin >> s1 >> s2;
    int k = 0;
    // cabdabkablllllab ab 
    // k = 15
    // pos = 14
    // 1 4 7 14
    while (s1.find(s2, k) != string::npos) {
        int pos = s1.find(s2, k);
        cout << pos << " ";
        k = pos + 1;
    }
    return 0;
}