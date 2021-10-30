#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> freq(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    set<vector<int>> st;
    st.insert(a);
    while (true) {
        for (int i = 0; i < n; i++) {
            a[i] = freq[a[i]];
        }
        if (st.count(a)) {
            break;
        }
        st.insert(a);
        fill(freq.begin(), freq.end(), 0);
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }
    }
    
    int q;
    cin >> q;
    vector<vector<int>> v;
    for (auto x : st) {
        v.push_back(x);
    }
    while (q--) {
        int x, k;
        cin >> x >> k;
       
        if (k >= v.size()) {
            k = v.size() - 1;
        }
        
        cout << v[k][x - 1] << "\n";
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}