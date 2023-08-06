#include<bits/stdc++.h>
using namespace std;
    
#define int long long
    
int search(int arr[], int l, int r, int target)
{
    if (l <= r)
    {
        int mid = (l+r)/2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) search(arr,mid+1,r,target);
        else search(arr,l,mid-1,target);
    }
    else return -1;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int arr[] = {10,11,14,15,20,35,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 35;
    //cout << binary_search(arr, arr+n, target);
    int pos = *lower_bound(arr, arr + n, target);
    cout << pos <<'\n';
    int pos2 = *upper_bound(arr,arr+n,target);
    cout << pos2 <<'\n';
    return 0;
}
