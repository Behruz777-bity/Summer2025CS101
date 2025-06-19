//
// Created by Behruz Babajanov on 17/06/25.
//
#include <iostream>
using namespace std;
void sayHello() {
   static int count=0;
    cout<<"Hello world!"<<++count<<endl;
}
int main() {
    sayHello();


}