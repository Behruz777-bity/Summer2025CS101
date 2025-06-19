//
// Created by Behruz Babajanov on 17/06/25.
//
#include <iostream>
using namespace std;
void swap (int a) {
    cout<<&a<<endl;
    swap(5);
    cout<<&a<<endl;
    a++;
}

int main() {
    int a=5;
    cout<<&a<<endl;
    swap(a);
    cout<<a<<endl;

}