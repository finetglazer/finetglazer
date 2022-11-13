#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll q=10000007;
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll max=1;
    for(ll i=1;i<=q;i++)
    {
        if(a%i==b%i && b%i==c%i && c%i==d%i)
        {
            max=i;
        }
    }
    cout<<max;
}
