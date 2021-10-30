#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    const long long MAX = 1e6;
    uniform_int_distribution<long long> dis(1, 5);
    int t = dis(rng);
    cout << t << "\n";
    while (t--) {
        int n = dis(rng);
        cout << n << "\n";
        vector<int> a(n);
        for (auto &it : a) {
            it = dis(rng);
        }
        for (auto &it : a) {
            cout << it << " ";
        }
        cout << "\n";
        int q = 1;
        cout << q << "\n";
        while (q--) {
            int x = dis(rng);
            x = min(n, x);
            int k = dis(rng);
            cout << x << " " << k << "\n";
        }
    }

    
}