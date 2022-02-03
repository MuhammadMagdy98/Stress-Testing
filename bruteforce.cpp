#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve()
{
  int x, y;
  cin >> x >> y;
  int now = 0;
  int ans = 0;
  while (x > 0 || y > 0)
  {
    if (!now)
      x -= 6;
    else
      y -= 6;
    now ^= 1;
    ans++;
  }
  cout << ans << "\n";
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}
