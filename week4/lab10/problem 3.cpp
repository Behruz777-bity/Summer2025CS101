//
// Created by Behruz Babajanov on 23/06/25.
//
#include <iostream>
using namespace std;
const int SIZE = 4;
double sumColumn(const double matrix[][SIZE], int rowCount, int colIndex) {
    double sum = 0;
    for (int row = 0; row < rowCount; row++) {
        sum += matrix[row][colIndex];
    }
    return sum;
}
int main() {
    double matrix[3][SIZE] = {
        {1.0, 2.0, 3.0, 4.0},
        {5.0, 6.0, 7.0, 8.0},
        {9.0, 10.0, 11.0, 12.0}
    };
    int numRows = 3;
    int column;
    cout << "Enter the column number (0 to " << SIZE - 1 << "): ";
    cin >> column;
    if (column < 0 || column >= SIZE) {
        cout << "Oops! That's not a valid column number." << endl;
    } else {
        double total = sumColumn(matrix, numRows, column);
        cout << "The sum of column " << column << " is " << total << endl;
    }
    return 0;
}


