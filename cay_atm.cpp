#include <bits/stdc++.h>
using namespace std;
int n, a[35], s;
int res = 1e9 + 7;
bool d;
void cayatm(int sum, int pos, int i)
{
    if (sum == s)
    {
        res = min(res, i);
        d = false;
    }
    for (int j = pos; j <= n; j++)
    {
        if (sum + a[j] <= s)
        {
            cayatm(sum + a[j], j + 1, i + 1);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        d = true;
        cin >> n >> s;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        cayatm(0, 1, 0);
        if (d)
            cout << "-1";
        else
            cout << res;
        cout << endl;
    }
}