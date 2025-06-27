//
// Created by Behruz Babajanov on 27/06/25.
//
#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    bool foundNonNegative = false;
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
        if (numbers[i] >= 0) {
            foundNonNegative = true;
        }
    }
    if (foundNonNegative) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}