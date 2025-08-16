#include <bits/stdc++.h>
using namespace std;

int F(int n) {
    if(n <= 1)
        return n;
    else {
        return F(n - 1) + F(n - 2);
    } 
}

int main() {
    cout << "fibonacci of 19: " << F(19);
    return 0;
}