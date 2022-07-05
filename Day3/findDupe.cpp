//
// Created by alam on 05/07/22.
//
#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums){
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i+1; j < nums.size(); ++j) {
            if(nums[i] == nums[j]){
                return nums[i];
            }
        }
    }
}


int main(){
    vector<int> num = {3,1,3,4,2};
    cout << findDuplicate(num);
    
    
    return 0;
}