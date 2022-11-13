#include <bits/stdc++.h>
#define ll long long
ll const mol=1e9+7;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x;
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            pq.push(x);
        }
        ll ans=0;
        while(pq.size()>1)
        {
            ll x1=pq.top();
            pq.pop();
            ll x2=pq.top();
            pq.pop();
            ans+=(x1+x2);
            ll cur=(x1+x2);
            cur%=mol;
            ans%=mol;
            pq.push(cur);
        }
        cout<<ans;
        cout<<endl;
    }
    
}