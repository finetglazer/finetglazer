#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a,a+n);
    int ans=0;
    ans=max(ans,a[0]*a[1]);
    ans=max(ans,a[n-2]*a[n-1]);
    ans=max(ans,a[0]*a[1]*a[n-1]);
    ans=max(ans,a[n-3]*a[n-2]*a[n-1]);
    cout<<ans;
}