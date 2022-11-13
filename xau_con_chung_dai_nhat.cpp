#include <bits/stdc++.h>
using namespace std;
int F[1005][1005];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x, y;
        cin >> x >> y;
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
                    if (x[i-1] == y[j-1])
                        F[i][j] = F[i - 1][j - 1] + 1;
                    else
                        F[i][j] = max(F[i - 1][j], F[i][j - 1]);
                }
            }
        }
        // for (int i = 0; i <= x.size(); i++)
        // {
        //     for (int j = 0; j <= y.size(); j++)
        //         cout << F[i][j] << " ";
        //     cout << endl;
        // }
        cout << F[x.size()][y.size()];
        cout << endl;
    }
}