#include <bits/stdc++.h>
using namespace std;

int main() {
    int firstPrev = 1;
    int secondPrev = 0;
    int sum;

    for(int i = 0; i <= 5; i++) {
        sum = secondPrev + firstPrev;
        secondPrev = firstPrev;
        firstPrev = sum;
        cout << sum << "\n";
    }
    return 0;
}