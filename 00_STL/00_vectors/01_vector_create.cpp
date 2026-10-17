#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v) {
    int size = v.size();
    cout << "size: " << size << "\n";
    for(int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    } 

    printVec(v);
}