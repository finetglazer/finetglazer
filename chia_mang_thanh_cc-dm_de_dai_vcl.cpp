#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        ll k;cin>>k;
        k=min(k,n-k);
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        ll sum1=0;
        ll sum2=0;
        for(ll i=0;i<k;i++) sum1+=a[i];
        for(ll i=k;i<n;i++) sum2+=a[i];
        ll ans=abs(sum2-sum1);
        cout<<ans<<endl;
    }
}