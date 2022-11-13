#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll cal(ll n,ll k)
{
    if(k==1) return 1;
    int x=pow(2,n-1);
    if(k==x) return n;
    else if(k<x) return cal(n-1,k);
    else return cal(n-1,k-x);
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll ans=cal(n,k);
        string s="*ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        cout<<s[ans];
        cout<<endl;
    }
}