#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll findsum(ll a[],ll l,ll m,ll r)
{
    ll lsum=0,rsum=0; 
    ll sum1=0,sum2=0;
    for(ll i=m;i>=l;i--)
    {
        sum1+=a[i];
        lsum=max(lsum,sum1);
    }
    for(ll i=m+1;i<=r;i++)
    {
        sum2+=a[i];
        rsum=max(rsum,sum2);
    }
    return max({lsum,rsum,lsum+rsum});
}
ll cal(ll a[],ll l,ll r)
{
    if(l==r) return a[l];
    ll m=(l+r)/2;
    return max({cal(a,l,m),cal(a,m+1,r),findsum(a,l,m,r)});
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
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        cout<<cal(a,1,n);
        cout<<endl;
    }
}