#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == '0')
            cout << "0" << endl;
        else
        {
            int n = s.size();
            s = 'x' + s;
            int dp[n + 5][n + 5];
            memset(dp, 0, sizeof(dp));
            for (int i = 1; i <= n; i++)
                dp[i][i] = 1;
            for (int len = 2; len <= n; len++)
            {
                for (int i = 1; i <= n - len + 1; i++)
                {
                    int j = i + len - 1;
                    if (len == 2)
                    {
                        if (s[i] == '2' && s[j] >= '0' && s[j] <= '6')
                        {
                            dp[i][j] += 1;
                        }
                        if(s[i]=='1') dp[i][j]++;
                    }
                    // else{
                    //     if(dp[i][j-1]>dp[i+1][j]) dp[i][j]=dp[i][j-1];
                    //     else dp[i][j]=dp[i][j-1]+dp[i+1][j]-1;
                    // }
                }

            }
            for(int i=1;i<=n;i++)          
            {
                for(int j=1;j<=n;j++)
                {
                    cout<<dp[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
}