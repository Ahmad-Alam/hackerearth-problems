//
// Created by alam on 06/07/22.
//check if a number is a palindrome or not

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:


    int isPalindrome(string S) {
        // Your code goes here

        string container = S;

        reverse(S.begin(), S.end());

        if (container == S) {
            return true;
        } else {
            return false;
        }

    }

};

int main() {


    return 0;
}