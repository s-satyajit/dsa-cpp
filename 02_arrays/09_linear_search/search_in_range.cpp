#include <bits/stdc++.h>
using namespace std;

int search(int my_arr[], int target, int start, int end) {
    for(int i = start; i <= end; i++) {
        if(my_arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int my_arr[] = {12, 18, 34, 69, 2, 40, 24, 25};
    int target = 69;
    int start = 2;
    int end = 6;
    int result = search(my_arr, target, start, end);
    cout << result << "\n";
    return 0;
}