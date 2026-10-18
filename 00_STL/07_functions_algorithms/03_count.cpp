#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 4, 23, 2, 2, 5, 4, 1, 23};

    for(auto it : arr) {
        cout << it << " ";
    }
    cout << endl;

    cout << count(arr, arr+5, 2);
}