#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int k,n,w;
    cin >> k >> n >> w;
    cout << max(k*(w+1)*w/2 - n, 0);
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}