//
// Created by alam on 01/07/22.
//
#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

class test {
    int n;
    int num[15];
    int output;
public:

    test() {
        n = 1;
        output = 0;
        for (int i = 0; i < 15; ++i) {
            num[i] = 1;
        }
    }

    void setN(int a) {
        n = a;
    }

    void setNum(char *c) {
        int j = 0;
        for (int i = 0; i < 15; ++i) {
            num[i] = 1;
        }
        for (int i = 0; i < (n * 2) - 1; ++i) {
            if (c[i] != ' ') {
                num[j] = c[i] - '0';
                j++;
            }
        }
    }

    void getAns() {
        output = 1;
        for (int i = 0; i < 15; ++i) {
            output *= num[i];
        }
        if (output % 10 == 2 || output % 10 == 3 || output % 10 == 5) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
};


int main() {

    int t, d, i = 0;
    char f[35];
    test *a;
    cin >> t;
    a = new test[t];
    int temp = t;
    while (t > 0) {
        cin >> d;
        getchar();
        cin.getline(f, 35);
        a[i].setN(d);
        a[i].setNum(f);
        t--;
        i++;
    }

    i = 0;

    while (temp > 0) {
        a[i].getAns();
        i++;
        temp--;
    }


    return 0;
}