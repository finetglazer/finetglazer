#include<bits/stdc++.h>
#define ll long long
ll const q = 123456789;
using namespace std;
ll cal(ll n)
{
    if(n==1) return 2;
    ll x=cal(n/2);
    if(n%2==0) return (x*x)%q;
    else return (((x*x)%q)*2)%q;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=cal(n-1);
        cout<<ans<<endl;
    }
}