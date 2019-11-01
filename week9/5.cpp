#include <iostream>

using namespace std;

int main() {
    int a[1000];
    string s, t;
    cin >> s >> t;
    int p = 0, k = 0;
    // s = kabcdabclabc
    // t = abc
    // p = 10
    while (s.find(t, p) != string::npos) {        
        k++;
        p = s.find(t, p) + 1;
        a[k - 1] = p - 1;
    }
    cout << k << endl;
    for (int i = 0; i < k; i++)
        cout << a[i] << " ";
    return 0;
}