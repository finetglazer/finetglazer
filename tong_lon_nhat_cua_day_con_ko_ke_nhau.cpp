#include<bits/stdc++.h>
#define ll long long 
using namespace std;
//b1 hieu cach de quy top -> down
ll dequy(ll a[],ll n)
{
    if(n<=0) return 0;
    return max(a[n]+dequy(a,n-2),dequy(a,n-1));
}
// b2 toi uu kgian bang mang down to top
ll dp(ll a[],ll n)
{
    vector<ll> vv;
    vv.push_back(0);
    vv.push_back(0);
    for(ll i=1;i<=n;i++)
    {
        vv.push_back(max(a[i]+vv[i-1],vv[i]));
    }
    return vv[n+1];
}
// b4 toi uu kgian
ll spdp(ll a[],ll n)
{
    ll s1=0;
    ll s2=0;
    ll tmp=0;
    for(ll i=1;i<=n;i++)
    {
        tmp=max(a[i]+s1,s2);
        s1=s2;
        s2=tmp;
    }
    return tmp;
}
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
        cout<<spdp(a,n)<<endl;
    }
}