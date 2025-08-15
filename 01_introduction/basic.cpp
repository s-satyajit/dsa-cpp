#include <bits/stdc++.h>
using namespace std;

int main() {
    int my_array[] = {23, 5, 395, 8, 23, 85, 23, 585, 3, 24};
    int min_val = my_array[0];
    for (int i = 0; i <= sizeof(my_array) / sizeof(my_array[0]); i++) {
        if(my_array[i] < min_val) {
            min_val = my_array[i];
        }
    }
    cout << min_val << "\n";
    cout << size(my_array);
}