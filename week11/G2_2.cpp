#include <iostream>
#include <algorithm>

using namespace std;

string a[5] = {"cde", "b", "abcd", "defh", "zz"};

bool f(string a, string b) {
    if (a.size() < b.size())
        return true;
    if (a.size() > b.size())
        return false;
    return (a < b);
}

int main() {
    sort(a, a + 5, f);
    // for (int i = 0; i < 5; i++) {
    //     for (int j = i + 1; j < 5; j++) {
    //         if (f(a[j], a[i]))
    //             swap(a[i], a[j]);
    //     }
    // }

    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    
    return 0;
}