//
// Created by Behruz Babajanov on 19/06/25.
//
#include <iostream>
using namespace std;
int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    return num % 10 + sumOfDigits(num / 10);
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = sumOfDigits(num);
    cout << "The sum of digits of " << num << " is: " << result << endl;
    return 0;
}