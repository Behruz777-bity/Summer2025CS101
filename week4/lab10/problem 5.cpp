//
// Created by Behruz Babajanov on 23/06/25.
//
#include <iostream>
#include <string>
using namespace std;
int count(const string& s, char a) {
    int occurrences = 0;
    for (int i = 0; i < (int)s.length(); i++) {
        if (s[i] == a) {
            occurrences++;
        }
    }
    return occurrences;
}
int main() {
    string str = "Welcome";
    char ch = 'e';
    cout << "Number of '" << ch << "' in \"" << str << "\": " << count(str, ch) << endl;
    return 0;
}