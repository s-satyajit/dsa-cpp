#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "cba";

    do {
        cout << str << endl;
    } while(prev_permutation(str.begin(), str.end()));
}