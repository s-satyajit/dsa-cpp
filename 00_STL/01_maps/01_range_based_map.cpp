#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> &m) {
    // map<int, string>::iterator it;
    // cout << "size: " << m.size() << endl;
    // for(it = m.begin(); it != m.end(); ++it) {
    //     cout << (*it).first << " " << (*it).second << "\n";
    // }

    for(auto &value : m) {
        cout << value.first << " " << value.second << endl;
    }
}

int main() {
    map<int, string> m;
    m[1] = "abc";
    m.insert({3, "bca"});
    m.insert({5, "acd"});
    m.insert({4, "abd"});
    m.insert({2, "acb"});

    printMap(m);
}