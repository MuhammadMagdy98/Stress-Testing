#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int get_prod(int n) {
    int ret = 0;
    while (n > 0) {
        ret += n % 10;
        n /= 10;
    }
    return ret;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &it : a) {
            cin >> it;
        }
        int q;
        cin >> q;
        vector<int> tmp = a;
        while (q--) {
            int x, k;
            cin >> x >> k;
            for (int i = 0; i < k; i++) {
                map<int, int> freq;
                for (int j = 0; j < n; j++) {
                    freq[a[j]]++;
                }
                for (int j = 0; j < n; j++) {
                    a[j] = freq[a[j]];
                }
            }
            cout << a[x - 1] << "\n";
            a = tmp;

            
        }
    }
    return 0;
}