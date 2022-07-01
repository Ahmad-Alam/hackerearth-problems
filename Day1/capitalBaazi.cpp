//
// Created by alam on 01/07/22.
//
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    string input;
    int i = 0;
    cout << "Enter the string for the operation: ";
    cin >> input;
    int inputLength = input.size();
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
    cout << "The desired string is: " << input;

    return 0;
}