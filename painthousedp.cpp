// problem: how many ways to paint n house with m colors
// withour more than m house adjacent be the same color
#include <bits/stdc++.h>
using namespace std;
void sol(int &n)// with m=2 and the two way to approach
{
    //
    int dp[105][105];
    // dp[i][j] the nums of ways paint the ith house end with the colour j
    // 0: first color
    // 1 : second color
    //....
    dp[1][1] = 1;
    dp[1][0] = 1;
    dp[2][1] = 2;
    dp[2][0] = 2;
    for (int i = 3; i <=n; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            dp[i][j] = dp[i - 1][1 - j] + dp[i - 2][1 - j];
        }
    }
    int ans = dp[n][1] + dp[n][0];
    cout<< ans<<endl;
}
void sol2(int &n)// m=2 and the sum
{
    int dp[105];
    dp[1]=2;
    dp[2]=4;
    for(int i=3;i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
    cout<<dp[n]<<endl;
}
// with no more than m house
int numsWay(int &m,int &n)
{
    int dp[105];
    for(int i=1;i<=m;i++)
    {
        dp[i]=pow(2,i);
    }
    for(int i=m+1;i<=n;i++)
    {
        dp[i]=0;
        for(int j=1;j<=m;j++)
        {
            // m=3 dp[i-1]+dp[i-2]+dp[i-3]
            dp[i]+=dp[i-j];
        }
    }
    return dp[n];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        cout<<numsWay(m,n)<<endl;
    }
}