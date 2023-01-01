#include <bits/stdc++.h>
#define ll long long
ll const mod = 1e9 + 7;
using namespace std;
ll dp[1005][1005];
void ktao()
{
    for (ll i = 0; i < 1005; i++)
    {
        for (ll j = 0; j < 1005; j++)
        {
            if (i == 0)
                dp[i][j] = 1;
            else
                dp[i][j] = 0;
        }
    }

    for (ll i = 1; i < 1005; i++)
    {
        for (ll j = i; j < 1005; j++)
        {
            dp[i][j] = dp[i-1][j-1]+dp[i][j-1];
            dp[i][j] %= mod;
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    ktao();
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        // for (ll i = 1; i <= 5; i++)
        // {
        //     for (ll j = 1; j <= 5; j++)
        //     {
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        cout<<dp[k][n]<<endl;
    }
}