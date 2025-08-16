#include <bits/stdc++.h>
using namespace std;

int binarySearch(int my_arr[], int target_value, int size) {
    int start = 0;
    int end = size - 1;

    while(start <= end) {
        int mid = (start + end)/2;
        if(target_value == my_arr[mid])
            return mid;

        if(target_value > my_arr[mid])
            start = mid+1;

        if(target_value < my_arr[mid])
            end = mid-1;
    }
    return -1;
}

int main() {
    int my_arr[] = {2, 3, 8, 28, 29, 34, 49, 52, 52, 54, 58, 78, 84, 90, 504, 513, 525, 532, 902, 958};
    int target_value = 90;
    int size = sizeof(my_arr) / sizeof(my_arr[0]);
    int result = binarySearch(my_arr, target_value, size);

    if(result != 1)
        cout << "index of " << target_value << " is: " << result << "\n";
    else
        cout << target_value << " not found\n";

    return 0;
}