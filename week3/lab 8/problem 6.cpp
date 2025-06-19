//
// Created by Behruz Babajanov on 19/06/25.
//
#include <iostream>
#include <string>
using namespace std;
template <typename T>
void compareValues(T a, T b) {
    if (a == b) {
        cout << "Values are equal" << endl;
    } else {
        cout << "The larger value is: " << (a > b ? a : b) << endl;
    }
}
template <typename T>
T middle(T a, T b, T c) {
    if ((a >= b && a <= c) || (a <= b && a >= c))
        return a;
  if ((b >= a && b <= c) || (b <= a && b >= c))
        return b;
        return c;
}
template <typename T>
T average(T a, T b) {
    return (a + b) / 2;
}
int main() {
    int int1 = 5, int2 = 10;
    compareValues(int1, int2);
    double double1 = 15.5, double2 = 15.5;
    compareValues(double1, double2);
    cout << "The middle value of (7, 3, 5) is: " << middle(7, 3, 5) << endl;
    cout << "The middle value of (10.2, 5.5, 7.8) is: " << middle(10.2, 5.5, 7.8) << endl;
    cout << "The average of 5 and 10 is: " << average(5, 10) << endl;
    cout << "The average of 3.5 and 7.5 is: " << average(3.5, 7.5) << endl;
    return 0;
}