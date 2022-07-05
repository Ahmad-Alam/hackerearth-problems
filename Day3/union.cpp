//
// Created by alam on 03/07/22.
//
//count of elements in the union of two arrays!

#include <iostream>
#include <set>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
    set<int> ans;
    for(int i=0;i<n;i++){
        ans.insert(a[i]);
    }

    for(int i=0;i<m;i++){
        ans.insert(b[i]);
    }

    return ans.size();
}


int main(){


    return 0;
}