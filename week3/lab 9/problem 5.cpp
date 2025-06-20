//
// Created by Behruz Babajanov on 20/06/25.
//
#include <iostream>
using namespace std;

bool strictlyEqual(const int list1[], const int list2[], int size) {
    for (int i = 0; i < size; ++i) {
        if (list1[i] != list2[i]) {
            return false;
        }
    }
    return true;
}
int main() {
    int size;
    cout << "Enter the size of the lists: ";
    cin >> size;
    if (size <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }
    int list1[100], list2[100];
    cout << "Enter elements of list 1:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> list1[i];
    }
    cout << "Enter elements of list 2:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> list2[i];
    }
    if (strictlyEqual(list1, list2, size)) {
        cout << "The two lists are strictly identical." << endl;
    } else {
        cout << "The two lists are NOT strictly identical." << endl;
    }
    return 0;
}