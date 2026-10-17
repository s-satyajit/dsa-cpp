#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> st;
    st.insert(12);
    st.insert(11);
    st.insert(10);
    st.insert(12);
    st.insert(13);
    st.insert(2);
    st.insert(12);

    for(int value : st) {
        cout << value << " ";
    }

    cout << endl;

    auto it = st.find(121);
    if(it != st.end())
        cout << *it << endl;

    auto cn = st.count(12);
    cout << cn;
}