#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> a;
    a.insert(5);
    a.insert(1);
    a.insert(12);
    a.insert(6);
    a.insert(1);
    a.insert(6);
    
    a.erase(1);

    if (a.find(1) != a.end()) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    cout << a.size();
    // set<int>::iterator it;
    // for (it = a.begin(); it != a.end(); it++)
    //     cout << *it << " ";
    return 0;
}