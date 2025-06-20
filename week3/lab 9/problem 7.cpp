//
// Created by Behruz Babajanov on 20/06/25.
//
#include <iostream>
using namespace std;
int main() {
    const int ROLLS = 10000;
    int counts[6] = {0};
    for (int i = 0; i < ROLLS; ++i) {
        int roll = (i * 37 + 13) % 6 + 1;
        counts[roll - 1]++;
    }
    cout << "Die roll results after " << ROLLS << " simulated rolls:\n";
    for (int i = 0; i < 6; ++i) {
        cout << "Value " << (i + 1) << ": " << counts[i] << " times\n";
    }
    return 0;
}