#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 5;
    int a[5] = {61, 12, 1, 8, 32};
    sort(a + 1, a + n - 1);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}