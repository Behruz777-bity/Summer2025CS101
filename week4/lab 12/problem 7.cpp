//
// Created by Behruz Babajanov on 27/06/25.
//
#include <iostream>
using namespace std;
int main() {
    double num;
    cout << "Enter a real number: ";
    cin >> num;
    cout << "Address of variable 'num': " << &num << endl;
    double* ptr = &num;
    cout << "Address of pointer 'ptr': " << &ptr << endl;
    cout << "Is pointer address same as variable address? ";
    cout << ((void*)&ptr == (void*)&num ? "Yes" : "No") << endl;
    cout << "Value stored in pointer (address of 'num'): " << ptr << endl;
    cout << "Value pointed to by pointer (*ptr): " << *ptr << endl;
    return 0;
}