#include <bits/stdc++.h>
using namespace std;

bool search(string name, char target) {
    for (int i = 0; i < name.size(); i++) {
        if(target == name[i]) {
            return true;
        }
    }
    return false;
}

bool search2(string name, char target) {
    for(char ch : name) {
        if(ch == target)
            return true;
    }
    return false;
}

int main() {
    string name = "Satyajit";
    char target = 't';
    bool result = search(name, target);
    bool result2 = search2(name, target);
    cout << boolalpha << result << "\n";
    cout << boolalpha << result2 << "\n";
    return 0;
}