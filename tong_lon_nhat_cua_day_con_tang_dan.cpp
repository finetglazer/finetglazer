#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        for(ll i=1;i<=n;i++) cin>>a[i];
        ll dp[n+5];
        for(ll i=1;i<=n;i++)
        {
            dp[i]=a[i];
            for(ll j=1;j<i;j++)
            {
               if(a[i]>a[j]) dp[i]=max(dp[i],dp[j]+a[i]);
            }
        } 
        // for(int i=1;i<=n;i++) cout<<dp[i]<<" ";
        cout<<*max_element(dp+1,dp+n+1);
        cout<<endl;
    }
}