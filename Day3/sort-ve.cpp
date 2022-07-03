//
// Created by alam on 03/07/22.
//
#include <iostream>
#include <bits/stdc++.h>

//in an array with unordered numbers, keep the negative numbers first and others in the end.
//just sorting the array is enough.

using namespace std;

int main() {

    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    for (int i = 0; i < 9; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}