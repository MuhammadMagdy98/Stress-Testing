#include <bits/stdc++.h>
using namespace std;

int main()
{

    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    const int MAX = 1e9;
    uniform_int_distribution<int> dis(1, MAX);
    uniform_int_distribution<int> dis2(1, 100);
    int t = dis2(rng);
    cout << t << "\n";
    assert(t >= 1 && t <= 100);
    for (int i = 0; i < t; i++)
    {
        int x = dis(rng);
        int y = dis(rng);
        cout << x << " " << y << "\n";
        assert(x >= 1 && x <= MAX && y >= 1 && y <= MAX);
    }
}