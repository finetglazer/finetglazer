#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll check(ll n)
{
    ll fn=0;
    ll f1=0;
    ll f2=1;
    while(n>fn)
    {
        fn=f1+f2;
        f1=f2;
        f2=fn;
        if(n==fn) return 1;
        if(n<fn) return 0;
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(check(n)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}