//
// Created by Behruz Babajanov on 19/06/25.
//
#include <iostream>
using namespace std;
double power(double base, int exponent) {
    if (exponent == 0)
        return 1;
    if (exponent > 0)
        return base * power(base, exponent - 1);
        return 1 / power(base, -exponent);
}

int main() {
    double base;
    int exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    double result = power(base, exponent);
    cout << base << " raised to the power " << exponent << " is " << result << endl;
    return 0;
}