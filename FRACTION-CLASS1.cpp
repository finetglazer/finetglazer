#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);// 7 va 1 
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
ll fraction::getx()
{
    return x;
}
ll fraction::gety()
{
    return y;
}
void fraction::in()
{
    cin>>x>>y;
}
void dreamers(fraction &a)
{
    ll tmp=gcd(a.getx(),a.gety());
    ll k=a.getx();
    ll l=a.gety();
    k/=tmp;
    l/=tmp;
    cout<<k<<"/"<<l;
}
int main()
{
    fraction a;
    a.in();
    dreamers(a);
}