#include <iostream>
#include <map>

using namespace std;

map<string, int> a;

int main() {
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (a.find(s) == a.end()) {
            a[s] = 1;
        } else {
            a[s]++;
        }
    }

    map<string, int>::iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}