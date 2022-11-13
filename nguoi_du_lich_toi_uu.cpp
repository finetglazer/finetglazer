#include <bits/stdc++.h>
using namespace std;
int n;
int a[25][25];
int b[25], check[25];
int ans;
void cal(int i,int cnt,int sum)
{
    if(ans<sum) return;
    if(cnt==n)
    {
        ans=min(ans,sum+a[i][1]);
        return;
    }
    for(int j=1;j<=n;j++)
    {
        if(check[j]==0)
        {
            check[j]=1;
            cal(j,cnt+1,sum+a[i][j]);
            check[j]=0;
        }
    }
}
int main()
{
    cin >> n;
    ans=INT_MAX;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    check[1]=1;
    cal(1,1,0);
    cout<<ans;
}