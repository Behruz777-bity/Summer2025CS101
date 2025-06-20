//
// Created by Behruz Babajanov on 20/06/25.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of characters: ";
    cin >> n;
    char chars[100];
    cout << "Enter " << n << " characters (no spaces): ";
    for (int i = 0; i < n; ++i) {
        cin >> chars[i];
    }
    cout << "\nCharacter types:\n";
    for (int i = 0; i < n; ++i) {
        char ch = chars[i];
        if (ch >= 'A' && ch <= 'Z') {
            cout << ch << " is an UPPERCASE letter.\n";
        } else if (ch >= 'a' && ch <= 'z') {
            cout << ch << " is a LOWERCASE letter.\n";
        } else if (ch >= '0' && ch <= '9') {
            cout << ch << " is a DIGIT.\n";
        } else {
            cout << ch << " is a SPECIAL character.\n";
        }
    }
    return 0;
}