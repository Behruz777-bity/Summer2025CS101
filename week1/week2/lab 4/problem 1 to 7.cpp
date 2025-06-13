//
// Created by Behruz Babajanov on 13/06/25.
//

// #include <iostream>
// using namespace std;
// int main() {
//     int number;
//   while (true) {
//       cin >> number;
//       if (number < 0) {
//           break;
//       }
//       cout << number << " "<< endl;
//   }
// return 0;
//
// }


// #include <iostream>
// using namespace std;
// int main() {
//     for (int i = 1; i <= 50; i++) {
//         if (i % 3 == 0 || i % 5 == 0) {
//             continue;
//         }
// cout << i << ""<< endl;
//     }
// return 0;
// }


// #include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;
//     double sum = 0.0;
//     for (int i = 1; i <= n; i++) {
//         cout << "1/" << i;
//         if (i < n) cout << " + ";
//         sum += 1.0 / i;
//     }
//     cout << endl << "The sum is " << sum;
//     return 0;
// }

// #include <iostream>
// using namespace std;
//
// bool isPrime(int num) {
//     if (num <= 1) return false;
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) return false;
//     }
//     return true;
// }
//
// int main() {
//     int n;
//     cin >> n;
//     while (true) {
//         n++;
//         if (isPrime(n)) {
//             cout << n;
//             break;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
//
// int main() {
//     int num, sum = 0;
//     cin >> num;
//     while (num > 0) {
//         sum += num % 10;
//         num /= 10;
//     }
//     cout << "The sum of digits is " << sum;
//     return 0;
// }


// #include <iostream>
// using namespace std;
//
// int main() {
//     int num, reversed = 0;
//     cin >> num;
//     while (num > 0) {
//         reversed = reversed * 10 + num % 10;
//         num /= 10;
//     }
//     cout << reversed;
//     return 0;
// }