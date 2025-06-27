//
// Created by Behruz Babajanov on 27/06/25.
//
#include <iostream>
using namespace std;
bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return original == reversed;
}
void printWithPadding(int num) {
    int spaces = 5;
    int temp = num;
    while (temp > 0) {
        spaces--;
        temp /= 10;
    }
    for (int i = 0; i < spaces; ++i) {
        cout << ' ';
    }
    cout << num;
}
int main() {
    int count = 0;
    int number = 2;
    while (count < 50) {
        if (number % 2 == 0 && isPalindrome(number)) {
            printWithPadding(number);
            count++;
            if (count % 5 == 0)
                cout << endl;
        }
        number++;
    }
    return 0;
}