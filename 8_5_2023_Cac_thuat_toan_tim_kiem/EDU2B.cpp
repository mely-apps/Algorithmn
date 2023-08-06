#include<bits/stdc++.h>
using namespace std;
    
#define int long long
const double inf = 1e18;
bool check(double mid, double len[], int n, int k)
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        cnt += (int)(len[i]/mid);
    }
    return cnt >= k;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n >> k;
    double len[n];
    for(int i = 0; i < n; i++) cin >> len[i];
    double l = 0, r = inf;
    for(int i = 0; i < 200; i++)
    {
        double mid = (l+r)/2;
        if (check(mid,len, n, k)) l = mid;
        else r = mid;
    }
    cout << fixed << setprecision(10) << l;
    
}
