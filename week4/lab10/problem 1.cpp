//
// Created by Behruz Babajanov on 23/06/25.
//
#include <iostream>
using namespace std;
int find_element(int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element_to_find;
    cout << "Enter element to find: ";
    cin >> element_to_find;
    int pos = find_element(arr, size, element_to_find);
    if (pos != -1) {
        cout << "Element " << element_to_find << " found at position " << pos << endl;
    } else {
        cout << "Element " << element_to_find << " not found in the array" << endl;
    }
    return 0;
}