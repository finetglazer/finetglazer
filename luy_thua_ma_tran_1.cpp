#include <bits/stdc++.h>
#define max 100
#define ll long long
ll n;
using namespace std;
ll const q = 1e9 + 7;
struct matrix
{
    ll a[max][max];
};
matrix operator*(matrix x, matrix y)
{
    matrix tmp;
    for (ll i = 0; i < max; i++)
        for (ll j = 0; j < max; j++)
            tmp.a[i][j] = 0;
    for (ll i = 0; i < n; i++)
    {

        for (ll j = 0; j < n; j++)
        {
            for (ll k = 0; k < n; k++)
            {
                tmp.a[i][j] += (x.a[i][k] * y.a[k][j]);
                tmp.a[i][j] %= q;
            }
        }
    }
    return tmp;
}
matrix cal(matrix x, ll k)
{
    if (k == 1)
        return x;
    matrix s = cal(x, k / 2);
    if (k % 2 == 1)
        return s * s * x;
    else
        return s * s;
}
void inmatrix(matrix b)
{
    ll ans = 0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cout<<b.a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> n >> k;
        matrix x;
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < n; j++)
                cin >> x.a[i][j];
        matrix ans = cal(x, k);
        inmatrix(ans);
        cout << endl;
    }
}