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
        ll b[n+5];
        ll ans=0;
        bool d=true;
        for(ll i=1;i<=n;i++) cin>>a[i];
        for(ll j=1;j<=n-1;j++)
        {
            cin>>b[j];
            if(b[j]!=a[j] && d==true)
            {
                ans=j;
                d=false;
            } 
        }
        cout<<ans;
        cout<<endl;
    }
}