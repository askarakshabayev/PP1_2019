#include <iostream>
#include <sstream>

using namespace std;

int main() {
    stringstream ss;
    ss << "100  200   300";
    int x, y, z;
    ss >> x >> y >> z;
    cout << x << " " << y << " " << z;



    return 0;
}