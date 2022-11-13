#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll C(ll k, ll n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
int main()
{
    ll n;
    cin>>n;
    int a[n+5];
    map<ll,ll> mp;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    } 
    long long cnt =0;
    for(auto &x: mp)
    {
        if(x.second>=2)
        {
            ll k=C(2,x.second);
            // cout<<k<<endl;
            cnt+=k;
        }
      
        
    }
    cout<<cnt;
}