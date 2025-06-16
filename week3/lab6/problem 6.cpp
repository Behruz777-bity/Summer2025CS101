//
// Created by Behruz Babajanov on 16/06/25.
//
 #include <iostream>
 using namespace std;
int max(int a,int b,int c) {
 if (a>=b && a>=c) {
  return a;
 }else if (b>=a&&b>=c) {
  return b;
 }else {
  return c;
 }
}
int main() {
 cout << max(23,24, 56);
}