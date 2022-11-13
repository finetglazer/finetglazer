#include <bits/stdc++.h>
using namespace std;
int n;
int check[105];
int a[100];
int F[30][30];
vector<string> vv;
int ans;

int sol(string x, string y)
{
    int n = x.size();
    int m = y.size();
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                F[i][j] = 0;

            else
            {
                if (x[i - 1] == y[j - 1])
                    F[i][j] = F[i - 1][j - 1] + 1;
                else
                    F[i][j] = max(F[i - 1][j], F[i][j - 1]);
            }
        }
    }
    return F[n][m];
}
void in()
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        res += sol(vv[a[i]], vv[a[i + 1]]);
    }
    ans = min(ans, res);
    res = 0;
}
void hoanvi(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check[j] == 0)
        {
            a[i] = j;
            check[j] = 1;
            if (i == n)
                in();
            else
                hoanvi(i + 1);
            check[j] = 0;
        }
    }
}
int main()
{
    ans = 10000;
    cin >> n;
    string s;
    vv.push_back("cc");
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        vv.push_back(s);
    }
    hoanvi(1);
    cout << ans;
}