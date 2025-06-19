//
// Created by Behruz Babajanov on 17/06/25.
//
#include <iostream>
using namespace std;
void updateMax(int x) {
    static int maxValue = INT_MIN;
    if (x > maxValue) {
        maxValue = x;
    }
    cout << "Current maximum value: " << maxValue << endl;
}
int main() {
    updateMax(5);
    updateMax(10);
    updateMax(2);
    updateMax(20);
    updateMax(15);
    return 0;
}