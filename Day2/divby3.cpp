//
// Created by alam on 02/07/22.
//
#include <iostream>
#include <bits/stdc++.h>


class Solution {
public:
    int isPossible(int N, int arr[]) {
        int sum = 0;
        for (int i = 0; i < N; ++i) {
            sum += arr[i];
            if(sum%3 == 0){
                return 1;
            }
            return 0;
        }
    }
};