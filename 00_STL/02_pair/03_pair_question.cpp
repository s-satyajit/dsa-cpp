#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> p_vector(n);
    for(int i = 0; i < n; i++) {
        cin >> p_vector[i].first;
        cin >> p_vector[i].second;
    }

    for(int i = 0; i < n; i++) {
        cout << "(" << p_vector[i].first << ", " << p_vector[i].second << ")" << "\n";
    }

    return 0;
}