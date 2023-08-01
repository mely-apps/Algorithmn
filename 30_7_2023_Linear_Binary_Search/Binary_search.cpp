#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int search(int n, int x)
{
    int l = 0, r = n-1;
    while (l <= r)
    {
        int mid = (l+r)/2;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < k; i++)
    {
        int num;
        cin >> num;
        if (search(n,num) == -1) cout << "NO";
        else cout << "YES";
        cout << '\n';
    }
    return 0;
}