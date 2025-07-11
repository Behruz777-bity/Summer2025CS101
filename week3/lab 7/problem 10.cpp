//
// Created by Behruz Babajanov on 17/06/25.
//
#include <iostream>
using namespace std;
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int n;
    cout << "Enter a number n: ";
    cin >> n;
    int result = factorial(n);
    cout << "Factorial of " << n << " is: " << result << endl;
    return 0;
}