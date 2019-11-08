#include <iostream>
#include <algorithm>

using namespace std;

bool gr(string a, string b) {
    if (a.size() > b.size())
        return false;
    if (b.size() > a.size())
        return true;
    return !(a > b);    
}

int main() {
    string a[100];
    int n;
    cin >> n;
    // n = 5
    // ee
    // ealb
    // klm
    // z
    // abcd
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, gr);
    // for (int i = 0; i < n; i++)
    //     for (int j = i + 1; j < n; j++)
    //         if (gr(a[i], a[j]) == true)
    //             swap(a[i], a[j]);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}