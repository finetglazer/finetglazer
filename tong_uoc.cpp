#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll uoc(ll x)
{
    ll sum=0;
    for(ll i=1;i<sqrt(x);i++)
    {
        if(x%i==0)
        {
            sum+=i;
            sum+=(x/i);
        }
    }
    if(sqrt(x)*sqrt(x)==x) sum+=sqrt(x);
    return sum;
}
int main()
{
    int n;
    cin>>n;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        cout<<uoc(a[i])<<" ";
    }
}