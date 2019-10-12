#include <iostream>

using namespace std;

int main() {
    int k, sum = 0, a, b, max_sum = 0, ind;
    cin >> a >> b;
    for (int p = a; p <= b; p++) {
        k = p; 
        sum = 0;
        for (int i = 1; i <= k; i++) {
            if (k % i == 0) {
                sum += i;
            }
        }
        if (max_sum < sum) {
            max_sum = sum;
            ind = p;
        }
    }
    cout << ind << " " << max_sum;
    return 0;
}
