// practicing writing code efficiently using neovim
// this program searches for an integer, if it is present in the array return
// the index of the element, otherwise return -1.

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int t) {
    int l = 0;
    int r = size - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == t) {
            return t;
        }
        if (arr[m]  < t) {
            l = m + 1;
        }
        if (arr[m] > t) {
            r = m - 1;
        }
        return -1;
    }
}

int main() {
    int n, t;
    int* arr;
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> t;

    return 0;
}
