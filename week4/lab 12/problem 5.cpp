//
// Created by Behruz Babajanov on 27/06/25.
//
#include <iostream>
using namespace std;
int simpleRand(int seed) {
    static int current = seed;
    current = (current * 123 + 59) % 1001;
    return current;
}
void printMatrix(int n) {
    int seed = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int value = simpleRand(seed + i * n + j);
            cout << value << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the size of the matrix (n): ";
    cin >> n;
    cout << "\nGenerated " << n << "x" << n << " matrix:\n\n";
    printMatrix(n);
    return 0;
}