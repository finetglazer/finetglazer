#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll const q = 1e15 + 7;
inline ll binMul(ll a, ll b)
{
    if (b == 0)
        return 0;
    ll res = binMul(a, b >> 1) % q;
    res = (res + res) % q;
    if (b & 1)
        res = (res + a) % q;
    return res;
}
struct mt
{
    ll a[4][4];
};
mt operator*(mt a, mt b)
{
    mt res;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            res.a[i][j] = 0;
            for (int z = 0; z < 4; ++z)
            {
                res.a[i][j] += binMul(a.a[i][z], b.a[z][j]) ;
                res.a[i][j] %= q;
            }
        }
    }
    return res;
}
mt cal(mt b, ll n)
{
    if (n == 1)
        return b;
    mt x = cal(b, n / 2);
    if (n % 2 == 0)
        return x * x;
    else
        return x * x * b;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (!n)
            cout << 0 << endl;
        else if (n == 1)
            cout << 1 << endl;
        else if (n == 2)
            cout << 3 << endl;
        else if (n == 3)
            cout << 6 << endl;
        else
        {
            mt b;
            for (int i = 0; i < 4; ++i)
                for (int j = 0; j < 4; ++j)
                    b.a[i][j] = 0;
            b.a[0][0] = b.a[0][1] = b.a[0][2] = b.a[0][3] = b.a[1][1] = b.a[1][2] = b.a[1][3] = b.a[2][1] = b.a[3][2] = 1;
            b = cal(b, n);
            cout << b.a[0][2] << endl;
        }
    }
}