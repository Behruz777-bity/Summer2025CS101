//
// Created by Behruz Babajanov on 27/06/25.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int num;

    cout << "Enter integers (0 to stop):" << endl;
    while (true) {
        cin >> num;
        if (num == 0) break;
        numbers.push_back(num);
    }
    if (numbers.empty()) {
        cout << "Vector is empty." << endl;
        return 0;
    }
    cout << "Front element: " << numbers.front() << endl;
    cout << "Back element: " << numbers.back() << endl;
    for (auto it = numbers.begin(); it != numbers.end(); ) {
        if (*it < 10) {
            it = numbers.erase(it);
        } else {
            ++it;
        }
    }
    if (numbers.size() >= 1)
        numbers.insert(numbers.begin() + 1, 33);
    else
        numbers.push_back(33);
    if (numbers.size() >= 2)
        numbers.insert(numbers.end() - 1, 55);
    else
        numbers.push_back(55);
    cout << "Final vector elements:" << endl;
    for (int val : numbers) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}