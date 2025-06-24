//
// Created by Behruz Babajanov on 24/06/25.
//
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > 0) v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
        for (int j = i + 1; j < v.size(); j++)
            if (v[j] < v[i]) {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
    return 0;
}