#include <iostream>

using namespace std;

int main() {
    string s;
    int k = 0;
    while (getline(cin, s)) {
        k++;
    }
    cout << k;
    
    return 0;
}