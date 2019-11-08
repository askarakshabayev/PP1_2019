#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> a;
    // a.insert(make_pair("PP1", 1));
    // a.insert(make_pair("PP2", 2));
    // a.insert(make_pair("ADS", 3));
    a["PP1"] = 1;
    a["PP2"] = 2;
    a["ADS"] = 3;

    map<string, int>::iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}