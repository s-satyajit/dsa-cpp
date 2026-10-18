#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> us;
    us.insert(23);
    us.insert(23);
    us.insert(23);
    us.insert(1);
    us.insert(10);
    us.insert(10);
    us.insert(1);
    us.insert(19);
    us.insert(19);

    for(auto &it : us) {
        cout << it << " ";
    }
    cout << "\n";

    auto it = us.find(10);
    if(it != us.end()) cout << *it << endl;
    else cout << "not found\n";

    cout << endl;
}