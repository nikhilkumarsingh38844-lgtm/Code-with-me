#include <iostream>
using namespace std;
int powerOfTwo(int n) {
    // Base case
    if (n == 0)
        return 1;
    // Recursive case
    return 2 * powerOfTwo(n - 1);
}
int main() {
    int n;
    cout << "Enter the exponent: ";
    cin >> n;
    cout << "2^" << n << " = " << powerOfTwo(n);
    return 0;
}