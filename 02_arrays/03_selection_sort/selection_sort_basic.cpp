#include <bits/stdc++.h>
using namespace std;

int main() {
    int my_arr[] = {3, 54, 2, 52, 8, 58, 525, 504, 90, 34};
    int n = sizeof(my_arr) / sizeof(my_arr[0]);

    
    for(int i = 0; i < n-1; i++) {
        int min_index = i;
        for(int j = 0; j < n-i-1; j++) {
            if(my_arr[j] < my_arr[min_index]) {
                min_index = j;
            }
        }
        int min_value = my_arr[min_index];
        for(int k = min_index; k > i; k--) {
            my_arr[k] = my_arr[k-1];
        }
        my_arr[i] = min_value;
    }

    for(int i = 0; i < n; i++) {
        cout << my_arr[i] << "\n";
    }
    return 0;
}