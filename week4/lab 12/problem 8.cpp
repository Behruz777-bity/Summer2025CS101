//
// Created by Behruz Babajanov on 27/06/25.
//
#include <iostream>
using namespace std;
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x, y;
    cout << "Enter two integers:\n";
    cin >> x >> y;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}