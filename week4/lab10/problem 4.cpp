//
// Created by Behruz Babajanov on 23/06/25.
//
#include <iostream>
using namespace std;
const int SIZE = 4;
double sumMajorDiagonal(const double m[][SIZE]) {
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += m[i][i];
    }
    return sum;
}
int main() {
    double matrix[SIZE][SIZE] = {
        {1.1, 2.2, 3.3, 4.4},
        {5.5, 6.6, 7.7, 8.8},
        {9.9, 10.1, 11.11, 12.12},
        {13.13, 14.14, 15.15, 16.16}
    };
    double result = sumMajorDiagonal(matrix);
    cout << "Sum of major diagonal: " << result << endl;
    return 0;
}