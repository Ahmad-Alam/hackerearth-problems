////
//// Created by alam on 02/07/22.
////

//so this works, but I don't know why the fuck it is duplicating the output on GeeksforGeeks.
//class Solution{
//public:
//    // arr: input array
//    // n: size of array
//    //Function to sort the array into a wave-like array.
//    void convertToWave(int n, vector<int>& arr){
//        int temp;
//        for (int i = 0; i < n; ++i) {
//            if (i != n-1) {
//                temp = arr[i];
//                arr[i] = arr[i + 1];
//                arr[i + 1] = temp;
//                i++;
//            }
//        }
//
//        for(int i=0; i < arr.size(); i++){
//            cout << arr.at(i) << ' ';
//        }
//    }
//
//};

#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[6] = {2, 4, 7, 8, 9, 10};
    int temp;
    for (int i = 0; i < 6; ++i) {
        if (i != 5) {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            i++;
        }
    }
    for (int i = 0; i < 6; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}