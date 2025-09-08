#include <bits/stdc++.h>
using namespace std;

// pair<int, int> search(vector<vector<int>> arr, int target) {
//     for(int i = 0; i < arr.size(); i++) {
//         for(int j = 0; j < arr[i].size(); j++) {
//             if(arr[i][j] == target) {
//                 return {i, j};
//             }
//         }
//     }
//     return {-1, -1};
// }

int main() {
    vector<vector<int>> my_arr = {
        {23, 53, 6},
        {7, 34, 49, 1},
        {2, 6, 34},
        {5, 48}
    };
    int target = 49;
    // auto result = search(my_arr, target);
    // if(result.first != -1 && result.second != -1)
    //     cout << "elements found at :" << result.first << " " << result.second;
    // else
    //     cout << "elements couldn't be found";

    for(int i = 0; i < my_arr.size(); i++) {
        for(int j = 0; j < my_arr[i].size(); j++) {
            if(my_arr[i][j] == target)
                cout << i << j;
        }
    }
    return 0;
}