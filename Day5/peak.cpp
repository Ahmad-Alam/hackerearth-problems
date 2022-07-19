#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int> &arr) {
    // Write your code here
    int s =0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    
    while(s<e){
        if(arr[mid] < arr[mid+1]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return arr[s];
}

int main(){

   vector<int> arr = {4, 5, 7, 2, 9, 0};
   cout << findPeak(arr) << endl;



    return 0;
}
