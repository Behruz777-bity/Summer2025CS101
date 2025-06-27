//
// Created by Behruz Babajanov on 27/06/25.
//
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int* arr = new int[n];
    int* ptr = arr;
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> *(ptr + i);
    }
    int oddCount = 0;
    for (int i = 0; i < n; ++i) {
        if (*(ptr + i) % 2 != 0) {
            oddCount++;
        }
    }
    cout << "Number of odd elements: " << oddCount << endl;
    delete[] arr;
    return 0;
}