#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a(3, 6); // 5 2 1 8
    a.push_back(5);
    a.push_back(2);
    a.pop_back();
    a.push_back(1);
    a.push_back(8);
    // a.begin()
    // a.end()
    a.insert(a.begin() + 2, 12);
    a.erase(a.begin() + 1);
    // sort(a.begin(), a.end());
    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    
    return 0;
}