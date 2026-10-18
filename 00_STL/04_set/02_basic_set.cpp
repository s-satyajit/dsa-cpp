#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> st;
    st.insert(12);
    st.insert(10);
    st.insert(5);
    st.insert(14);
    st.insert(34);
    st.insert(1);
    st.insert(10);
    st.insert(5);
    st.insert(10);

    for(auto&it : st) {
        cout << it << " ";
    }
    cout << endl;

    auto lb = st.lower_bound(10);
    auto ub = st.upper_bound(10);
    cout << *lb << " " << *ub << endl;
    
    auto it1 = st.begin();
    it1++;

    auto it2 = st.end();
    it2--;

    st.erase(it1, it2);

    for(auto &it : st) {
        cout << it << " ";
    }
    cout << endl;

}