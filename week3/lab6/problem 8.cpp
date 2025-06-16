//
// Created by Behruz Babajanov on 16/06/25.
//
// #include <iostream>
// using namespace std;
//
// int cubeOfDigits(int number) {
//     int sum = 0;
//     while (number > 0) {
//         int d = number % 10;
//         sum += d * d * d;
//         number /= 10;
//     }
//     return sum;
// }
//
// bool isArmstrong(int number) {
//     return number == cubeOfDigits(number);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     if (isArmstrong(n))
//         cout << "Yes";
//     else
//         cout << "No";
//     return 0;
// }