//
// Created by alam on 06/07/22.
//reverse a string
//well, just push stuff into a vector and then pop it.
#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s){
    vector<char> temp;
    int size = s.size();
    for (int i = size-1; i >= 0; --i) {
        temp.push_back(s[i]);
    }
    for (int i = 0; i < temp.size(); ++i) {
        cout << temp[i] << " ";
    }
}

int main(){
    vector<char> some = {'a', 'h', 'm', 'a', 'd'};
    reverseString(some);
    cout << "and that's pretty much it.";
    return 0;
}