#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mol =  1000000007;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        for(ll i =0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll sum=0;
        for( ll i=0;i<n;i++)
        {
            sum+=(a[i]*i);
            sum%=mol;
        }
        sum%=mol;
        cout<<sum;
        cout<<endl;
    }

}