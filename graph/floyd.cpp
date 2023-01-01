#include <bits/stdc++.h>
using namespace std;

void cal()
{
    int dp[105][105];
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < 105; i++)
    {
        for (int j = 0; j < 105; j++)
        {
            if (i == j)
                dp[i][j] = 0;
            else
                dp[i][j] = 1e9;
        }
    }
    int x, y, w;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y >> w;
        dp[x][y] = w;
        dp[y][x] = w;
    }
    for (int k = 1; k < v + 1; k++)
    {
        for (int i = 1; i < v + 1; i++)
        {
            for (int j = 1; j < v + 1; j++)
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }
    int t;
    cin >> t;
    int k,l;
    while (t--)
    {
        cin >> k >> l;
        cout << dp[k][l] << endl;
    }
}
int main()
{
    cal();
}