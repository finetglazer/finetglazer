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
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        ll x;
        for(ll i=1;i<=n;i++)
        {
            cin>>x;
            pq.push(x);
        }
        ll ans=0;
        while(pq.size()!=1)
        {
            ll t1=pq.top();
            pq.pop();
            ll t2=pq.top();
            pq.pop();
            ans+=(t1+t2);
            pq.push(t1+t2);
        }
        cout<<ans<<endl;
    }
}