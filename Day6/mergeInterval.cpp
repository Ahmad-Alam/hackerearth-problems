//
// Created by alam on 21/07/22.
//
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> mergeInterval(vector<vector<int>> &intervals) {
    for (int i = 0; i < intervals.size(); ++i) {
        if (i + 1 != intervals.size()) {
            if (intervals[i][1] > intervals[i + 1][0]) {
                intervals[i].pop_back();
                intervals[i].push_back(intervals[i + 1][1]);
                intervals[i + 1].clear();
            }
        }
    }
    return intervals;
}

int main() {
    vector<int> first = {1, 3};
    vector<int> second = {2, 6};

    vector<vector<int>> interval = {first, second};

    mergeInterval(interval);

    for (int i = 0; i < interval.size(); ++i) {
        for (int j = 0; j < interval[i].size(); ++j) {
            cout << interval[i][j] << " ";
        }
    }

    return 0;
}