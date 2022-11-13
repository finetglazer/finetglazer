#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n+5];
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll k=lower_bound(a,a+n,x)-a;
        
        // ko co gia tri nao nho  hon hoac bang
        if(k==0) cout<<"-1";
        else{
            if(a[k]>x) k--;
            cout<<k;
        }
        cout<<endl;
    }
}