#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll const q = 1e9 + 7;
struct mt
{
    ll a[2][2];
};
mt operator*(mt x, mt y)
{
    mt res;
    for (ll i = 0; i < 2; i++)
    {
        for (ll j = 0; j < 2; j++)
            res.a[i][j] = 0;
    }
    for (ll i = 0; i < 2; i++)
    {
        for (ll j = 0; j < 2; j++)
        {
            for (ll k = 0; k < 2; k++)
            {
                res.a[i][j] += x.a[i][k] * y.a[k][j];
                res.a[i][j] %= q;
            }
        }
    }
    return res;
}
mt cal(mt x, ll n)
{
    if (n == 1)
        return x;
    mt tmp = cal(x, n / 2);
    if (n % 2 == 1)
        return tmp * tmp * x;
    else
        return tmp * tmp;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        mt x;
        x.a[0][0]=1;x.a[0][1]=1;x.a[1][0]=1;x.a[1][1]=0;
        mt ans=cal(x,n);
        cout<<ans.a[1][0];
        cout<<endl;
    }
}