#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> st;
    st.insert(12);
    st.insert(10);
    st.insert(12);
    st.insert(54);
    st.insert(25);
    st.insert(10);
    st.insert(5);
    st.insert(6);
    st.insert(53);

    for(auto &value : st) {
        cout << value << " ";
    }

    cout << "\n";

    // auto lb = st.lower_bound(11);
    // auto up = st.upper_bound(11);
    cout << *st.lower_bound(10) << " " << *st.upper_bound(10) << "\n";

    auto it1 = st.begin();
    it1++;

    auto it2 = st.end();
    it2--;

    st.erase(it1, it2);
    for(auto value : st) {
        cout << value << " ";
    }

    cout << endl;

}