#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll const mod=1e9+7;
ll n,k;
ll dp[1005][1005];
void ktao()
{
    memset(dp,0,sizeof(dp));
    for(ll i=1;i<1005;i++)
        dp[0][i]=1;
    for(ll i=1;i<1005;i++)
    {
        for(ll j=1;j<1005;j++)
        {
            if(j>i)
            {
                dp[i][j]=dp[i-1][j]*(j-i+1);
                dp[i][j]%=mod;
            }
        }
    }
}
int main()
{
    ll t;
    cin>>t;
    ktao();
    while(t--)
    {
        cin>>n>>k;
        cout<<dp[k][n]<<endl;
    }
}