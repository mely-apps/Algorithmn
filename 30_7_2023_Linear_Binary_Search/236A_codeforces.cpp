#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string S;
    getline(cin,S);
    set<char>save;
    for(auto x: S) save.insert(x);
    if (save.size() % 2 == 1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}