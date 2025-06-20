//
// Created by Behruz Babajanov on 20/06/25.
//
#include <iostream>
using namespace std;
double averageOfArray() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 0;
    }
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        double element;
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        sum += element;
    }
    return sum / n;
}
int main() {
    double avg = averageOfArray();
    cout << "Average: " << avg << endl;
    return 0;
}