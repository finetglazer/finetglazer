#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll const mod = 1e9 + 7;
// A recursive function used by countWays
ll countWaysUtil(ll n, ll m)
{
    ll res[n];
    res[0] = 1;
    res[1] = 1;

    for (ll i = 2; i < n; i++)
    {
        res[i] = 0;

        for (ll j = 1; j <= m && j <= i; j++)
        {
            res[i] += res[i - j];
            res[i] %= mod;
        }
    }
    return res[n - 1];
}

// Returns number of ways to reach s'th stair
ll countWays(int s, int m)
{
    return countWaysUtil(s + 1, m);
}

// Driver code
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll s, m;
        cin >> s >> m;
        cout << countWays(s, m) << endl;
    }

    return 0;
}