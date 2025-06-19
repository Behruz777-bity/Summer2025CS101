//
// Created by Behruz Babajanov on 17/06/25.
//
#include <iostream>
using namespace std;
void addToSum(int x) {
    static int sum = 0;
    sum += x;
    cout << "Updated sum: " << sum << endl;
}
int main() {
    addToSum(5);
    addToSum(10);
    addToSum(20);
    addToSum(-5);
    addToSum(0);
    return 0;
}