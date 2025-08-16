#include <bits/stdc++.h>
using namespace std;

int main() {
    int my_arr[] = {2, 5, 8, 57, 89, 0, 1, 23};
    int minVal = my_arr[0];
    
    for(int i = 0; i < size(my_arr); i++) {
        if(my_arr[i] < minVal) {
            minVal = my_arr[i];
        }
    }
    cout << minVal;
    return 0;
}