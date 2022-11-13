#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int val[1005], wei[1005];
int n, maxw;
void cal()
{

    for (int i = 1; i <= n; i++)
        cin >> wei[i];
    for (int j = 1; j <= n; j++)
        cin >> val[j];
    memset(dp, 0, sizeof(dp));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=maxw;j++)
        {
            // ko lay 
            dp[i][j]=dp[i-1][j];
            // lay
            if(j>=wei[i])
            {
                dp[i][j]=max(dp[i][j],dp[i-1][j-wei[i]]+val[i]);
            }
        }
    }
    cout<<dp[n][maxw]<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> maxw;
        cal();
    }
}