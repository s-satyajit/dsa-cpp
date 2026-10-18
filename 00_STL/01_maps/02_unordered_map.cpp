#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, string> um;
    um[1] = "abc";
    um[12] = "acd";
    um.insert({2, "abd"});
    um.insert({6, "adb"});
    um.insert({2, "bdc"});
    um.insert({12, "kgf"});

    for(auto &it : um) {
        cout << it.first << " " << it.second << "\n";
    }
}