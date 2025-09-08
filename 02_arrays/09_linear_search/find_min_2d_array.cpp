#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> my_int = {
        {23, 53, 6},
        {7, 34, 49, 1},
        {2, 6, 34},
        {5, 48}
    };

    int min = INT_MAX;
    for(auto& ints : my_int) {
        for(int element : ints) {
            if(element < min)
                min = element;
        }
    }
    cout << min;
}