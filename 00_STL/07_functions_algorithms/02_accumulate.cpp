#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 3, 5, 6, 23};
    for(auto it : arr) {
        cout << it << " ";
    }
    cout << endl;
    cout << accumulate(arr, arr+5, 0) << endl;
}