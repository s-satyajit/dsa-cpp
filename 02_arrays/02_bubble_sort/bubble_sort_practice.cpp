#include <bits/stdc++.h>
using namespace std;

int main() {
    int my_arr[] = {3, 54, 2, 52, 8, 58, 525, 504, 90, 34};
    int size = sizeof(my_arr) / sizeof(my_arr[0]);

    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-i-1; j++) {
            if(my_arr[j] > my_arr[j+1]) {
                int temp = my_arr[j];
                my_arr[j] = my_arr[j+1];
                my_arr[j+1] = temp;
            }
        }
    }
    
    for(int i = 0; i < size; i++) {
        cout << my_arr[i] << " ";
    }

    return 0;
}