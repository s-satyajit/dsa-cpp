#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m;
    m[1] = "abc";
    m[4] = "acd";
    m.insert({2, "acd"});
    m.insert({5, "abd"});
    m.insert({3, "adb"});

    map<int, string>::iterator it;
    for(it = m.begin(); it != m.end(); ++it) {
        cout << (*it).first << " " << (*it).second << endl;
    }
}