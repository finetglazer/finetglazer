#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll res[n + 5];
        res[0] = 1;
        res[1] = 1;
        for (ll i = 2; i <= n; i++)
        {
            res[i] = 0;
            for (ll j = 1; j <= i && j <= 3; j++)
            {
                res[i] += res[i - j];
            }
        }
        cout << res[n] << endl;
    }
}