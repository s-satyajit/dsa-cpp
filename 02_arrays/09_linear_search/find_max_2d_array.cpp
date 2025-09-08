#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> my_arr = {
        {23, 53, 6},
        {7, 34, 1},
        {2, 6, 34},
        {5, 48, 2, 4, 2}
    };
    int max = INT_MIN;
    for(auto& ints : my_arr) {
        for(int element : ints) {
            if (element > max) {
                max = element;
            }
        }
    }
    cout << max;
}