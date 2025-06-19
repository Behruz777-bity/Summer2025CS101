//
// Created by Behruz Babajanov on 19/06/25.
//
#include <iostream>
using namespace std;
int product(int a, int b) {
    if (b == 0)
        return 0;
    return a + product(a, b - 1);
}
int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int result = product(num1, num2);
    cout << "The product of " << num1 << " and " << num2 << " is: " << result << endl;
    return 0;
}