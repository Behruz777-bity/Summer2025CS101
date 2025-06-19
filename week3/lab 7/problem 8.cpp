//
// Created by Behruz Babajanov on 17/06/25.
//
#include <iostream>
using namespace std;
int sumNumbers(int n) {
    if (n == 1)
        return 1;
    else
        return n + sumNumbers(n - 1);
}
int main() {
    int n;
    cout << "Enter a number n: ";
    cin >> n;
    int result = sumNumbers(n);
    cout << "Sum of numbers from 1 to " << n << " is: " << result << endl;
    return 0;
}