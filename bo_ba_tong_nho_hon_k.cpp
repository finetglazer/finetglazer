#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll sum=0;
        ll n,k;
        cin>>n>>k;
        ll a[n+5];
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(ll i=0;i<=n-3;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                ll pos=lower_bound(a+j+1,a+n,k-a[i]-a[j])-a;
                pos-=1;
                pos-=j;
                sum+=pos;
            }
        }
        cout<<sum;
        cout<<endl;
    }
}