//
// Created by Behruz Babajanov on 17/06/25.
//
#include <iostream>
using namespace std;
void powerTwo(int &x) {
    x = x * x;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Original value: " << number << endl;
    powerTwo(number);
    cout << "Value after squaring (power of two): " << number << endl;
    return 0;
}