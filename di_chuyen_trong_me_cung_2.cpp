#include <bits/stdc++.h>
using namespace std;
int dx[4] = {0, -1, 1, 0};
int dy[4] = {-1, 0, 0, 1};
int n, a[10][10];
int check[12][12];
vector<string> vv;

void Try(int i, int j, string s = "")
{
    if (!a[1][1] or !a[n][n])
        return;
    if (i == n && j == n)
    {
        vv.push_back(s);
        return;
    }
    if (a[i + 1][j] and i != n and !check[i + 1][j])
    {
        check[i][j] = 1;
        Try(i + 1, j, s + "D");
        check[i][j] = 0;
    }
    if (a[i][j - 1] and j != 1 and !check[i][j - 1])
    {
        check[i][j] = 1;
        Try(i, j - 1, s + "L");
        check[i][j] = 0;
    }
    if (a[i][j + 1] and j != n and !check[i][j + 1])
    {
        check[i][j] = 1;
        Try(i, j + 1, s + "R");
        check[i][j] = 0;
    }
    if (a[i - 1][j] and i != 1 and !check[i - 1][j])
    {
        check[i][j] = 1;
        Try(i - 1, j, s + "U");
        check[i][j] = 0;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vv.clear();
        cin >> n;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
                check[i][j] = 0;
            }
        string s="";
        Try(1, 1,s);

        if (vv.size() == 0)
            cout << "-1";
        else
        {
            sort(vv.begin(), vv.end());
            for (int i = 0; i < vv.size(); i++)
                cout << vv[i] << " ";
        }
        cout << endl;
    }
}