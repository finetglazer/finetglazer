#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sz(ll s)
{
   ll res=1;
    while(s>9)
    {
        s/=10;
        res++;
    }
    return res;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        queue<ll> qu;
        qu.push(6);
        qu.push(8);
        vector<ll> vv;

        vv.push_back(6);
        vv.push_back(8);
        while(1)
        {
            ll cur=qu.front();
            if(sz(cur)>n) break;
            else{
                qu.pop();
                qu.push(cur*10+6);
                qu.push(cur*10+8);
                if(sz(cur*10+6)<=n) vv.push_back(cur*10+6);
                if(sz(cur*10+8)<=n)vv.push_back(cur*10+8);
                
            }
        }
        cout<<vv.size()<<endl;
        for(int i=0;i<vv.size();i++)
        {
            cout<<vv[i]<<" ";
        }
        cout<<endl;
    }   
}