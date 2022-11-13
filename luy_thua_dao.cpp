#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll const mol = 1000000007;
ll cal(ll n, ll k)
{
    if (k == 1)
        return n;
    ll x = cal(n, k / 2);
    if (k % 2 == 0)
        return (x * x) % mol;
    else
        return ((x * x) % mol * n) % mol;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll k;
        cin >> k;
        ll tmp = k;
        if (k == 0)
            cout << "0";
        else
        {
            ll n = 0;
            while (tmp != 0)
            {
                n *= 10;
                n += (tmp % 10);
                tmp /= 10;
            }
            cout << cal(k, n);
        }

        cout << endl;
    }
}