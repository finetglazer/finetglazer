#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v1(105);
        vector<int> v2(105);
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> v2[i];
        }
        vector<int> vv(105, 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                // v1[i].fi*v2[i].fi
                vv[i + j] += (v1[i] * v2[j]);
            }
        }
        for (int i = 0; i < n + m-1; i++)
        {
            cout << vv[i] << " ";
        }
        cout << endl;
    }
}