//
// Created by Behruz Babajanov on 20/06/25.
//
#include <iostream>
using namespace std;
int indexOfLargestElement(double array[], int size) {
    int largestIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (array[i] >= array[largestIndex]) {
            largestIndex = i;
        }
    }
    return largestIndex;
}
int main() {
    const int SIZE = 15;
    double numbers[SIZE];
    cout << "Enter 15 numbers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }
    int index = indexOfLargestElement(numbers, SIZE);
    cout << "The index of the largest element is: " << index << endl;
    return 0;
}