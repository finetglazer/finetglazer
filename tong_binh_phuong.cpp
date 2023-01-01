#include <bits/stdc++.h>
using namespace std;
int ans, n;
// void cal(int k,int sum=0)
// {
//     if(k==0)
//     {
//         ans=min(ans,sum);
//         return ;
//     }
//     else if(k<0) return;
//     for(int  i=sqrt(k);i>=1;i--)
//     {
//         cal(k-i*i,sum+1);
//     }
// }
int dp[10005];
void ktao()
{
    for (int i = 1; i < 10005; i++)
    {
        dp[i]=i;
        for(int j=1;j<=sqrt(i);j++)
        {
            int s=j*j;
            if(i<s) break;
            else 
            {
                dp[i]=min(dp[i],1+dp[i-s]);
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    ktao();
    while (t--)
    {
        cin >> n;
        cout << dp[n] << endl;
    }
}