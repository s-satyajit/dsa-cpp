#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 3, 5, 6, 23};
    sort(arr, arr+5);
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> vec = {32, 5, 92, 20, 2, 75};
    sort(vec.begin(), vec.end());
    for(auto it : vec) {
        cout << it << " ";
    }
}