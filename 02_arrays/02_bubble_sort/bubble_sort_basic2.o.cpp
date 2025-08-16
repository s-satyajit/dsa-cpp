#include <bits/stdc++.h>
using namespace std;

int main() {
    int my_arr[] = {3, 54, 2, 52, 8, 58, 525, 504, 90, 34};
    int n = sizeof(my_arr) / sizeof(my_arr[0]);

    for(int i = 0; i < n-1; i++) {
        bool swapped = false;
        for(int j = 0; j < n-i-1; j++) {
            if(my_arr[j] > my_arr[j+1]) {
                int temp = my_arr[j];
                my_arr[j] = my_arr[j+1]
                swapped = true;
            }
        }
        if(!swapped) break;
    }

    for(int i = 0; i < n; i++) {
        cout << my_arr[i] << "\n";
    }

    return 0;
}