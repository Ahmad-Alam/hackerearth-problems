//
// Created by alam on 01/07/22.
//
#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    int test;
    int n;
    int num[15];
    char input[30];
    int output = 1;
    cin >> test;

    while (test) {
        int j = 0;
        cin >> n;
        getchar();
        cin.getline(input, (n * 2));

        for (int i = 0; i < 15; ++i) {
            num[i] = 1;
        }

        for (int i = 0; i < (n * 2) - 1; ++i) {
            if (input[i] != ' ') {
                num[j] = input[i] - '0';
                j++;
            }
        }

        for (int i = 0; i < 15; ++i) {
            output *= num[i];
        }

        if (output % 10 == 2 || output % 10 == 3 || output % 10 == 5) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        test--;
    }

    return 0;
}