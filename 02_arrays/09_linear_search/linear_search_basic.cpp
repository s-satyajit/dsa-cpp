#include <bits/stdc++.h>
using namespace std;

int linearSearch(int my_arr[], int target_value, int size) {
    for(int i = 0; i < size; i++) {
        if(my_arr[i] == target_value)
            return i;
    }
    return -1;
}

int main() {
    int my_arr[] = {3, 54, 2, 52, 8, 58, 525, 504, 90, 34};
    int target_value = 54;
    int size = sizeof(my_arr) / sizeof(my_arr[0]);
    int result = linearSearch(my_arr, target_value, size);

    if(result != -1)
        cout << "index of " << target_value << " found at " << result << "\n";
    else 
        cout << target_value << " not found\n";

    return 0;
}