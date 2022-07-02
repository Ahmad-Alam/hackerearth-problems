////
//// Created by alam on 02/07/22.
////
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