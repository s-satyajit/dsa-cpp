#include <bits/stdc++.h>
using namespace std;

int findMin(int my_arr[], int size) {
    int min = my_arr[0];
    for(int i = 0; i < size; i++) {
        if (my_arr[i] < min) {
            min = my_arr[i];
        }
    }
    return min;
}

int main() {
    int my_arr[] = {12, 18, 34, 69, 2, 40, 24, 25};
    int size = sizeof(my_arr) / sizeof(my_arr[0]);
    int result = findMin(my_arr, size);
    cout << result;
    return 0;
}