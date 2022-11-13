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
        queue<long long> qu;
        qu.push(1);
        ll cnt=1;
        vector<long long> vv;
        vv.push_back(1);
        while(1)
        {
            ll cur=qu.front();
            qu.pop();
            qu.push(cur*10+0);
            vv.push_back(cur*10+0);
            cnt++;
            if(cnt==n) break;
            qu.push(cur*10+1);
            vv.push_back(cur*10+1);
            cnt++;
            if(cnt==n) break;
        }
        for(ll i=0;i<vv.size();i++) cout<<vv[i]<<" ";
        cout<<endl;
    }
}