#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int dp[x + 5];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for (int i = 1; i <= x; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i >= a[j])
                {
                    dp[i] += dp[i - a[j]];
                    dp[i] %= mod;
                }
            }
        }
        cout << dp[x] << endl;
    }
}