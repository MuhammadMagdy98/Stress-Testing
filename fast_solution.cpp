#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
	int x, y;
	cin >> x >> y;
	int need_x = (x + 5) / 6;
	int need_y = (y + 5) / 6;

	cout << max(need_x, need_y) * 2 - 1 * (need_x > need_y) << "\n";
	
	
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	int t;
	cin >> t;
	while (t--)
		solve();
}
