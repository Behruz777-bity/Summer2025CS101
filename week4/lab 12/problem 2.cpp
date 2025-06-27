//
// Created by Behruz Babajanov on 27/06/25.
//
#include <iostream>
using namespace std;
int main() {
    int height;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    if (height == 0) {
        cout << "Depth is 0" << endl;
    } else {
        int num = 1;
        for (int i = 1; i <= height; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << num << " ";
                ++num;
            }
            cout << endl;
        }
    }
    return 0;
}