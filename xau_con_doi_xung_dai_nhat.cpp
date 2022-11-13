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
        s = "x" + s;
        int x = s.size();
        bool dp[x+5][x+5];
        int ans = 1;
        memset(dp, false, sizeof(dp));
        for (int i = 1; i < x; i++)
            dp[i][i] = true;
        for (int len = 2; len < x; len++)
        {
            for (int i = 1; i < x-len+1 ; i++)
            {
                int j = i + len - 1;
                if (len == 2 && s[i] == s[j])
                {
                    dp[i][j] = true;
                    
                }
                else
                {
                    if (s[i] == s[j])
                    {
                        dp[i][j] = dp[i + 1][j - 1];
                       
                    }
                }
                if(dp[i][j]) ans=max(ans,len);
            }
        }
        // for(int i=1;i<x;i++)
        // {
        //     for(int j=1;j<x;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        cout << ans << endl;
    }
}