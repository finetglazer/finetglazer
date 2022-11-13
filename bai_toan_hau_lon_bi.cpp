#include <bits/stdc++.h>
using namespace std;
int n, a[100], col[100], skew1[100], skew2[100], cnt = 0;
void in()
{
    // int b[100][100]={0};
    // for(int i=1;i<=n;i++)
    // {
    //     b[i][a[i]]=1;//a[1]=2
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout<<b[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    cnt++;
}
// skew i-j+n va i+j-1
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (col[j] == 0 && skew1[i + j - 1] == 0 && skew2[i - j + n] == 0)
        {
            a[i] = j;
            col[j] = 1;
            skew1[i + j - 1] = 1;
            skew2[i - j + n] = 1;
            if (i == n)
                in();
            else
                Try(i + 1);
            col[j] = 0;
            skew1[i + j - 1] = 0;
            skew2[i - j + n] = 0;
            a[i] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cnt=0;
        cin >> n;
        memset(a, 0, 100);
        memset(col, 0, 100);
        memset(skew1, 0, 100);
        memset(skew2, 0, 100);
        Try(1);
        cout << cnt;
    }
}