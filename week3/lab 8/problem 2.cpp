//
// Created by Behruz Babajanov on 19/06/25.
//
#include <iostream>
using namespace std;
double computeSeries(int n) {
    if (n == 1)
        return 1.0 / (1 * 1 + 1);
        return 1.0 / (n * n + 1) + computeSeries(n - 1);
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    double result = computeSeries(n);
    cout << "The result of the series f(" << n << ") is: " << result << endl;
    return 0;
}