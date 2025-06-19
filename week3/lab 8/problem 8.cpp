//
// Created by Behruz Babajanov on 19/06/25.
//
#include <iostream>
#include <cmath>
using namespace std;
int octal2Dec(const int& octalNumber) {
    int decimalNumber = 0;
    int power = 0;
    int num = octalNumber;
    while (num > 0) {
        int digit = num % 10;
        decimalNumber += digit * pow(8, power);
        num /= 10;
        power++;
    }
    return decimalNumber;
}
int main() {
    int octalNumber;
    cout << "Enter an octal number: ";
    cin >> octalNumber;
    int decimalValue = octal2Dec(octalNumber);
    cout << "The decimal equivalent of octal number " << octalNumber << " is: " << decimalValue << endl;
    return 0;
}