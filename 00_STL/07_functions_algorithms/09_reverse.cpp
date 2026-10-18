#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 4, 23, 2, 2, 5, 4, 1, 23};
    reverse(arr, arr+9);
    for(int i = 0; i < 9; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}