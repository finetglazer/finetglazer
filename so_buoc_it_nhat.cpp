// idea :
// find the longest subsequence , n-that 
// because the members out of the longest sequence needed to be insert, and longest so on to be the least member wrong order.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int dp[n+5];
        int ans;
        // find the longest sub;
        for(int i=0;i<n;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(a[i]>=a[j])
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        ans= n-*max_element(dp,dp+n);
        cout<<ans<<endl;
        // for (int i = 0; i < n; i++)
        //     cout << a[i] << " ";
    }
}