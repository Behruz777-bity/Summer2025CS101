//
// Created by Behruz Babajanov on 20/06/25.
//
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int sum=0;
    for (int i=0;i<n+1;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}