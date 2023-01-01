#include <bits/stdc++.h>
using namespace std;
vector<int> vv[1005];
int vi[1005];
vector<pair<int, int>> lst;
int v, e, fi, ed;
void dfs(int i, int u, int v)
{
    vi[i] = 0;
    for (auto x : vv[i])
    {
        if ((i == u && x == v) || (i == v && u == x))
            continue;
        if (vi[x] == -1)
        {
            dfs(x, u, v);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        memset(vi, -1, sizeof(vi));
        lst.clear();
        for (int i = 0; i < 1005; i++)
            vv[i].clear();
        cin >> v >> e;
        int x, y;
        for (int i = 0; i < e; i++)
        {
            cin >> x >> y;
            vv[x].push_back(y);
            vv[y].push_back(x);
            lst.push_back({x, y});
        }
        int orgin = 0;
        for (int i = 1; i <= v; i++)
        {
            if (vi[i] == -1)
            {
                dfs(i, 0,0);
                orgin++;
            }
        }
        // cout<<orgin<<endl;
        int cnt = 0;
        vector<string> ans;
        int tmp = 0;
        string s = "";
        for (auto x : lst)
        {
            memset(vi, -1, sizeof(vi));
            for (int i = 1; i <= v; i++)
            {
                if (vi[i] == -1)
                {
                    dfs(i, x.first, x.second);
                    cnt++;
                }
            }
            if (cnt > orgin)
            {
                if (x.first < x.second)
                {
                    s += to_string(x.first);
                    s += " ";
                    s = s + to_string(x.second);
                }
                else
                {
                    s = s + to_string(x.second);
                    s += " ";
                    s += to_string(x.first);
                }
                ans.push_back(s);
                s = "";
                tmp++;
            }
            cnt = 0;
        }
        // sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        // cout<<tmp;
    }
}