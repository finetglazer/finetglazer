#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n+5];
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll tmp;
        ll cnt=0;
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            tmp=lower_bound(a,a+n,k+a[i])-a; 
            // cout<<tmp<<" ";
            ans+=(tmp-i-1);
        }
        cout<<ans<<endl;
    }
}