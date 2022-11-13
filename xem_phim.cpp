#include <bits/stdc++.h>
using namespace std;
int dp[105][25005];
int main()
{
    int maxw, n;
    cin >> maxw >> n;
    int w[n + 5];
    for (int i = 1; i <= n; i++)
        cin >> w[i];
    
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= maxw; j++)
        {
            // 0 lay
            dp[i][j] = dp[i - 1][j];
            // lay
            if (j >= w[i])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + w[i]);
        }
    }
    cout<<dp[n][maxw];
}