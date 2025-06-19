//
// Created by Behruz Babajanov on 17/06/25.
//
#include <iostream>
using namespace std;
void fun() {
    int values=5;
    cout<<"fun"<<&values<<endl;
}
int main() {
    int value=5;
    cout<<&value<<endl;
    fun();
    cout<<&(::value)<<endl;
}