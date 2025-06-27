//
// Created by Behruz Babajanov on 27/06/25.
//
#include <iostream>
using namespace std;
int yearToCentury(int year) {
    if (year <= 0) {
        cout << "Year must be a positive number." << endl;
        return -1;
    }
    return (year + 99) / 100;
}