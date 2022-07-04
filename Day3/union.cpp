//
// Created by alam on 03/07/22.
//
//show a union of two arrays!

#include <iostream>
using namespace std;

int main(){
    int* a;
    int* b;
    int* c;
    int* d;
    int aSize;
    int bSize;
    cin >> aSize;
    cin >> bSize;
    int cSize = aSize + bSize;
    a = new int[aSize];
    b = new int[bSize];
    for (int i = 0; i < aSize; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < bSize; ++i) {
        cin >> b[i];
    }
    for (int i = 0; i < aSize; ++i) {
        for (int j = 0; j < bSize; ++j) {
            if(a[i] == b[j]){
                if (b[j] != 99){
                    cSize--;
                }
                b[j] = 99;

            }
        }
    }

    c = new int[cSize];
    d = new int[aSize+bSize];

    for (int i = 0; i < aSize+bSize; ++i) {
        if(i > aSize){
            d[i] = b[i-bSize];
        }
        d[i] = a[i];
    }

    for (int i = 0; i < aSize+bSize; ++i) {
        cout << d[i] << " ";
    }
    return 0;
}