#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[10000005];
int main()
{
    ll n;cin>>n;
    if(n%2==0 || n%5==0) cout<<"-1";
    else{
        a[0]=0;
        for(ll i=1;i<1000;i++)
        {
            a[i]=a[i-1]*10+3;
            if(a[i]%n==0)
            {
                cout<<i;
                break;
            }
        }
    }
    
}