#include <bits/stdc++.h>
using namespace std;
int numDecodings(string s)
{
    int n = s.size() - 1;
    int dp[n + 5];
    for (int i = 0; i < n + 5; i++)
        dp[i] = 1;
    // for(int i=0;i<n+5;i++) cout<<dp[i]<<" ";
    // 0 dp[0]=0
    // 1 2 2 4
    // 5 3 2 1
    // dp[0]= dp[1](s[i]!=0): [1] +[2->4]//3
    // dp[0]+=dp[2]: [12] [2-4]-> [2][4] , [24]//2
    for (int i = n; i >= 0; i--)
    {
        if (s[i] == '0')
            dp[i] = 0;
        else
            dp[i] = dp[i + 1];
        if (i + 1 <= n && ((s[i] == '1') || (s[i] == '2' && s[i + 1] >= '0' && s[i + 1] <= '6')))
        {
            dp[i] += dp[i + 2];
        }
    }
    return dp[0];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        cout<<numDecodings(s)<<endl;
    }
}
