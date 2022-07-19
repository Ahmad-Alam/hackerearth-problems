//
// Created by alam on 19/07/22.
//
#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(long long n) {
    if ((int) (sqrt(n)) == sqrt(n)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    long long input;
    cout << "Enter a number: ";
    cin >> input;


    return 0;
}