#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[5] = {8, 1, 6, 5, 4};
    sort(a + 1, a + 4);
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";  
    
    return 0;
}