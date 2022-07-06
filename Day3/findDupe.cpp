//
// Created by alam on 05/07/22.
//find the duplicate number in the array
//sort the array first and then just check if the next number is the array element.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findDuplicate(vector<int> &nums) {

    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == nums[i + 1]) {
            return nums[i];
        }
    }
}

int main() {
    vector<int> num = {3, 1, 3, 4, 2};
    cout << findDuplicate(num);


    return 0;
}