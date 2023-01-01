#include <bits/stdc++.h>
using namespace std;
int parent[1005];
int vi[1005];
int v, e, fi;
int sz[1005];
vector<int> vv[1005];
vector<pair<int, int>> ans;
int cnt;
void init()
{
    cnt=0;
    ans.clear();
    memset(vi, -1, sizeof(vi));
    for (int i = 0; i < 1005; i++)
        vv[i].clear();
    cin >> v >> e >> fi;
    for (int i = 1; i <= v; i++)
    {
        parent[i] = i;
        sz[i] = 1;
    }
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        vv[x].push_back(y);
        vv[y].push_back(x);
    }
}
int find(int i)
{
    if (i == parent[i])
        return i;
    return parent[i] = find(parent[i]);
}
bool un(int x, int y)
{
    x = find(x);
    y = find(y);
    if (x == y)
        return false;
    else if (sz[x] < sz[y])
    {
        sz[y] += sz[x];
        parent[x] = y;
    }
    else
    {
        sz[x] += sz[y];
        parent[y] = x;
    }
    return true;
}
void dfs(int i)
{
    vi[i] = 0;
    if(cnt==v-1) return;
    for (auto x : vv[i])
    {
        if (vi[x] == -1)
        {
            if(un(i,x))
            {
                cnt++;
                ans.push_back({i,x});
            }
            dfs(x);
        }
           
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        dfs(fi);
        if(cnt!=v-1) cout<<"-1"<<endl;
        else 
        {
            for(auto tmp:ans)
            {
                cout<<tmp.first<<" "<<tmp.second<<endl;
            }
        }
    }
}