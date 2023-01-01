#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 5][m + 5];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int tmp = 10000000;

                if (i - 1 >= 0)
                {
                    tmp = min(tmp, a[i - 1][j]);
                }
                if (i - 1 >= 0 && j - 1 >= 0)
                {
                    tmp = min(tmp,a[i - 1][j - 1]);
                }
                if (j - 1 >= 0)
                {
                    tmp = min(tmp, a[i][j - 1]);
                }
                if (tmp != 10000000)
                {
                    a[i][j] += tmp;
                }
            }
        }
        cout<<a[n-1][m-1]<<endl;
        
    }
}