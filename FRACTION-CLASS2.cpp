#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
ll bcnn(ll a, ll b)
{
    return a*b/gcd(a,b);
}
class fraction
{
    private: 
        ll x,y;
    public:
        void in();
        ll getx();
        ll gety();

};
void fraction::in()
{
    cin>>x>>y;
}
ll fraction::getx()
{
    return x;
}
ll fraction::gety()
{
    return y;
}
void dreamers(fraction a,fraction b)
{
    fraction dream;
    ll k=a.getx();
    ll l=a.gety();
    ll m=b.getx();
    ll n=b.gety();
    ll ln=bcnn(l,n);
    k*= (ln/l);
    m*= (ln/n);
    ll dreamx= k+m;
    ll dr=gcd(dreamx,ln);
    dreamx/=dr;
    ln/=dr;
    cout<<dreamx<<"/"<<ln;
}
int main()
{
    fraction a,b;
    a.in();
    b.in();
    dreamers(a,b);
}