#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll res,n,s;
ll a[32];
bool d;
void doitien(ll sum,ll pos,ll i)
{
    if(sum==s) 
    {
        res=min(res,i);
        d=false;
    }
    for(int j=pos;j<=n;j++)
    {
        if(sum+a[j]<=s)
        {
            doitien(sum+a[j],j+1,i+1);
        }
    }
}
int main()
{
    d=true;
    res=1e9+7;
    cin>>n>>s;
    for( ll i=1;i<=n;i++) cin>>a[i];
    doitien(0,1,0);
    if(d) cout<<"-1";
    else cout<<res;
}