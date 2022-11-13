#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll const q=1e9+7;
struct mt
{
    ll a[2][2];
    /* data */
};
mt operator * (mt x,mt y)
{
    mt res;
    for(ll i=0;i<2;i++)
    {
        for(ll j=0;j<2;j++)
        {
            res.a[i][j]=0;
            for(ll k=0;k<2;k++)
            {
                res.a[i][j]+=x.a[i][k]*y.a[k][j];
                res.a[i][j]%=q;
            }
        }
    }
    return res;
}
mt cal(ll n,mt x)
{
    if(n==1) return x;
    mt s=cal(n/2,x);
    if(n%2==1) return s*s*x;
    else return s*s;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;  
        mt ans;
        ans.a[0][0]=1;
        ans.a[0][1]=1;
        ans.a[1][0]=1;
        ans.a[1][1]=0;
        ans=cal(n,ans);
        cout<<ans.a[1][0];
        cout<<endl;
    }
}