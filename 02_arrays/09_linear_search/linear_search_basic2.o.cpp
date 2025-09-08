#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int element, int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == element)
            return i;
        }
    return -1;
}

int main() {
    int my_arr[] = {23, 28, 9, 18, 58, 5, 26};
    int my_element = 198;
    int size = sizeof(my_arr) / sizeof(my_arr[0]);
    int result = linearSearch(my_arr, my_element, size);
    if(result != -1)
        cout << "element found at index: " << result << endl;
    else
        cout << "element not found in the array!";
    return 0;
}