//
// Created by alam on 01/07/22.
//
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    char input[10000];
    int i = 0;
    cin.getline(input,sizeof(input));
    int inputLength = sizeof(input);
    while(inputLength){
        if(input[i] == ' '){
            input[i] = '\n';
        }
        else{
            input[i] = toupper(input[i]);
        }
        i++;
        inputLength--;
    }
    cout << input;

    return 0;
}