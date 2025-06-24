//
// Created by Behruz Babajanov on 24/06/25.
//
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of grades: ";
    cin >> n;
    double* grades = new double[n];

    for (int i = 0; i < n; ++i) {
        cout << "Enter grade #" << (i + 1) << ": ";
        cin >> grades[i];
    }
    double max_grade = grades[0];
    double min_grade = grades[0];
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        if (grades[i] > max_grade) max_grade = grades[i];
        if (grades[i] < min_grade) min_grade = grades[i];
        sum += grades[i];
    }
    double average = sum / n;
    cout << "Maximum grade: " << max_grade << "\n";
    cout << "Minimum grade: " << min_grade << "\n";
    cout << "Average grade: " << average << "\n";
    delete[] grades;
    return 0;
}