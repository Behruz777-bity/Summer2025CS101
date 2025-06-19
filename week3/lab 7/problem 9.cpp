//
// Created by Behruz Babajanov on 17/06/25.
//
#include <iostream>
using namespace std;
int sum_numbers(int n) {
    if (n==0) {
        return 0;
    }
    cout<<n<<endl;
    return n+sum_numbers(n:n-1);
}
int main() {
    cout<<sum_numbers(1)<<endl;
}