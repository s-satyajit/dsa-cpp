#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2, 4, 23, 2, 2, 5, 4, 1, 23};
    int* it = min_element(arr, arr+5);
    cout << *it << endl;
}