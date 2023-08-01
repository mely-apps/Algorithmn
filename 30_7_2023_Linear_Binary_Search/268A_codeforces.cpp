#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int h[n],a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> h[i] >> a[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (h[i] == a[j] && i != j) cnt++;
        }
    cout << cnt;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}