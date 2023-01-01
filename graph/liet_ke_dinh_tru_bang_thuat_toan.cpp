#include <bits/stdc++.h>
using namespace std;
int v, e;
int times = 0;
vector<int> vv[1005];
int disc[1005]; // tg atham cac canh bang dfs
int low[1005];
int AP[1005];
void nhap()
{
    times = 1;
    memset(AP, 0, sizeof(AP));
    memset(disc, 0, sizeof(disc));
    memset(low, 0, sizeof(low));
    for (int i = 0; i < 1005; i++)
        vv[i].clear();
    cin >> v >> e;
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        vv[x].push_back(y);
        vv[y].push_back(x);
    }
}
void tajan(int u, int par)
{
    // low[v]>=dis[u]  tat ca to tien cua u sang v phair sang u
    int cnt = 0;
    disc[u] = low[u] = times;
    times++;
    for (auto v : vv[u])
    {
        if (v == par)
            continue;
        if (disc[v] == 0)
        {
            cnt++;
            tajan(v, u);
            low[u] = min(low[v], low[u]);
            if (low[v] >= disc[u] && par != -1)
                AP[u] = 1;
        }
        else
        {
            low[u] = min(low[u], disc[v]);
        }
    }
    if (par == -1 && cnt > 1)
    {

        AP[u] = 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nhap();
        for (int i = 1; i <= v; i++)
        {
            if (disc[i] == 0)
                tajan(i, -1);
        }
        // for(int i=1;i<=v;i++)
        // {
        //     cout<<disc[i]<<" "<<low[i]<<endl;

        // }
        for (int i = 1; i <= v; i++)
        {
            if (AP[i])
                cout << i << " ";
        }
        cout << endl;
    }
}