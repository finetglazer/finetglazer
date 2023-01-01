#include<bits/stdc++.h>
using namespace std;

int n, m, res;
int dp[1005][1005];
pair<int,int> a[1005];

void solve()
{
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            if(j < a[i].first) dp[i][j] = dp[i - 1][j];
            else dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i].first] + a[i].second);
            res = max(res, dp[i][j]);
        }
    }
}

int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        res = 0;
        cin >> n >> m;
        for(int i = 1; i <= n; ++i) cin >> a[i].first;
        for(int i = 1; i <= n; ++i) cin >> a[i].second;
        solve();
        cout << res << endl;
    }
    return 0;
}
