#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(4);
    ms.insert(12);
    ms.insert(23);
    ms.insert(15);
    ms.insert(4);
    ms.insert(12);
    ms.insert(13);
    ms.insert(1);

    for(auto &it : ms) {
        cout << it << " ";
    }
    cout << endl;
    auto get12 = ms.find(12);
    cout << *get12 << "\n";
    
    ms.erase(12);
    for(auto &it : ms) {
        cout << it << " ";
    }
    cout << endl;
}