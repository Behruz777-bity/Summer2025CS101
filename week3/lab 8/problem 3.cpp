//
// Created by Behruz Babajanov on 19/06/25.
//
#include <iostream>
using namespace std;
double seriesSum(int n) {
    if (n == 1) {
        return 1.0 / (1 * 3);
    }
    return 1.0 / (n * (n + 2)) + seriesSum(n - 1);
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    double result = seriesSum(n);
    cout << "Sum of the series up to n = " << n << " is: " << result << endl;
    return 0;
}