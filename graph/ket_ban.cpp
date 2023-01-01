#include <bits/stdc++.h>
using namespace std;
int v, e;
set<int> st[100005];
int vi[100005];
void init()
{
    memset(vi, -1, sizeof(vi));
    for (int i = 0; i < 100005; i++)
        st[i].clear();
    cin >> v >> e;
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        st[x].insert(y);
        st[y].insert(x);
    }
}
int bfs(int i)
{
    vi[i] = 0;
    queue<int> qu;
    qu.push(i);
    int cur ;
    int res = 1;
    while (qu.size() != 0)
    {
        cur = qu.front();
        qu.pop();
        for (auto x : st[cur])
        {
            if (vi[x] == -1)
            {
                vi[x]=0;
                res++;
                qu.push(x);
            }
        }
    }
    return res;
}
void cal()
{
    int ans = 0;
    for (int i = 1; i <= v; i++)
    {
        if (vi[i] == -1)
        {
            ans = max(ans, bfs(i));
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        cal();
    }
}