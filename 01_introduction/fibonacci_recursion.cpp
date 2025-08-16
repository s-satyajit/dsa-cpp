#include <bits/stdc++.h>
using namespace std;

int cnt = 2;
void fibonacci(int prev1, int prev2) {
    if(cnt <= 8) {
        int sum = prev1 + prev2;
        cout << sum << "\n";
        cnt++;
        prev2 = prev1;
        prev1 = sum;
        fibonacci(prev1, prev2);
    } else {
        return;
    }
}

int main() {
    cout << "0\n" << "1\n";
    fibonacci(1, 0);
    return 0;
}