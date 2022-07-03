//
// Created by alam on 03/07/22.
//
//show a union of two arrays!

#include <iostream>
using namespace std;

int main(){
    int* a;
    int* b;
    int aSize;
    int bSize;
    cin >> aSize;
    cin >> bSize;
    a = new int[aSize];
    b = new int[bSize];
    for (int i = 0; i < aSize; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < bSize; ++i) {
        cin >> b[i];
    }



    return 0;
}