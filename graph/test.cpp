#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e;
        cin >> v >> e;
        vector<int> vv[e + 5];
        int x, y;
        for (int i = 1; i <= e; i++)
        {
            cin >> x >> y;
            vv[x].push_back(y);
            vv[y].push_back(x);
        }
        int ans = 0;
        bool vis[v + 5];

        memset(vis, true, sizeof(vis));
        for (int i = 1; i <= v; i++)
        {
            if (vis[i])
            {
                queue<int> qu;
                qu.push(i);
                vis[i] = false;
                int cur;
                while (qu.size() != 0)
                {
                    cur = qu.front();
                    qu.pop();
                    for (auto j : vv[cur])
                    {
                        if (vis[j])
                        {
                            qu.push(j);
                            vis[j] = false;
                        }
                    }
                }
                ans++;
            }   
        }
        cout<<ans<<endl;
    }
}