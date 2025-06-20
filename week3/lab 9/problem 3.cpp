//
// Created by Behruz Babajanov on 20/06/25.
//
#include <iostream>
using namespace std;

int findMinimum(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];  }
    return min;
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Minimum element: " << findMinimum(arr, n) << endl;
    return 0;
}