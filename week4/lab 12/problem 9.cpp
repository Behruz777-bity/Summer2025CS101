//
// Created by Behruz Babajanov on 27/06/25.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    double* arr = new double[n];
    double* ptr = arr;
    cout << "Enter " << n << " double values:\n";
    for (int i = 0; i < n; ++i) {
        cin >> *(ptr + i);
    }
    cout << "Array elements from end to front:\n";
    for (int i = n - 1; i >= 0; --i) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}