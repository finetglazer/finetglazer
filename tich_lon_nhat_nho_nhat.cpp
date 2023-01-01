#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n+5];
        ll b[n+5];
        ll max=INT_MIN;
        ll min=INT_MAX;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>max) max=a[i];
        }
        for(ll i=0;i<k;i++)
        {
            cin>>b[i];
            if(b[i]<min) min=b[i];
        }
        long long end=min*max;
        cout<<end<<endl;
    }
}