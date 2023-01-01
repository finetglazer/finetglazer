#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int a[n+5];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        a[0]=2;
        bool dp[s+5];
        for(int i=1;i<=s;i++) dp[i]=false;
        dp[0]=true;
        for(int i=1;i<=n;i++)
        {
            for(int j=s;j>=a[i];j--)
            {
                if(dp[j-a[i]]==true)
                    dp[j]=true;
            }
        }
        if(dp[s]==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}