#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << sqrt(25) << endl;
    cout << "1.2" << endl;
    cout << " floor " << floor(1.2) << endl;
    cout << " ceil " << ceil(1.2) << endl;
    cout << " round " << round(1.2) << endl;  
    cout << "1.8" << endl;
    cout << " floor " << floor(1.8) << endl;
    cout << " ceil " << ceil(1.8) << endl;
    cout << " round " << round(1.8) << endl;  
    cout << min(5, min(6, 7)) << endl;
    cout << max(5, 6) << endl;
    cout << M_PI << endl;

    printf("hello %.10f world %d!", M_PI, 6);

    return 0;
}