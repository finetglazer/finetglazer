#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+5][m+5];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        int dp[n+5][m+5];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]!=0)
                {
                    if(a[i][j-1]!=0 and a[i-1][j]!=0 and a[i-1][j-1]!=0 and i>=1 and j>=1)
                    {
                        a[i][j]=min(a[i][j-1],min(a[i-1][j-1],a[i-1][j]))+1;
                        ans=max(a[i][j],ans);
                    }
                }
            }
        }
        cout<<ans<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         cout<<a[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
    }
}