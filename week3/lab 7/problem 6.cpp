//
// Created by Behruz Babajanov on 17/06/25.
//
#include <iostream>
using namespace std;
void reverseDigits(int &x) {
    int reversed = 0;
    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    x = reversed;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Original value: " << number << endl;
    reverseDigits(number);
    cout << "Reversed value: " << number << endl;
    return 0;
}