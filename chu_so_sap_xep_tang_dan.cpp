// idea: find the numbers increasing deprive from 1;
// 1 10;
// 2 xy : x has 9 ways to choose and y just has(1->x)
// 3 xyz : x has 9 ways to choose and yz is the num of the case 2;
// ...
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll const mod = 1e9 + 7;
int main()
{
    ll dp[105];
    memset(dp, 0, sizeof(dp));
    dp[1] = 10;
    ll a[105];
    ll sum;
    for (ll i = 1; i <= 9; i++)
        a[i] = 1;
    for (ll i = 2; i <= 100; i++)
    {
        for (ll j = 1; j < 10; j++)
        {
            sum = 0;
            for (ll k = j; k < 10; k++)
            {
                sum += a[k];
                sum %= mod;
            }
            dp[i] += sum;
            dp[i] %= mod;
            a[j] = sum;
        }
    }
    for (ll i = 2; i <= 100; i++)
    {
        dp[i] += dp[i - 1];
        dp[i] %= mod;
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << dp[n] << endl;
    }
}
