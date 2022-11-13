#include <bits/stdc++.h>
using namespace std;
int n;
int a[25][25];
int b[25], check[25];
int ans;
void cal(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check[j] == 0)
        {
            b[i] = j;
            check[j] = 1;

            if (i == n)
            {
                int cnt = a[b[n]][b[1]];
                for (int k = 2 ; k <= n; k++)
                {
                    cnt += a[b[k-1]][b[k]];
                    if(cnt >ans) break;
                }   
                if (cnt < ans)
                    ans = cnt;
            }
            else
                cal(i + 1);
            check[j] = 0;
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
    cal(1);
    cout<<ans;
}