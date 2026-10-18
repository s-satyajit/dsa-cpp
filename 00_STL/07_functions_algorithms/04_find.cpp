#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 4, 23, 2, 2, 5, 4, 1, 23};
    auto it = find(arr, arr+8, 2);
    cout << it;
}