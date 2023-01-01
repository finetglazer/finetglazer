#include <bits/stdc++.h>
using namespace std;
int vi[1005];
int par[1005];
vector<int> vv[1005];
int v, e;
int check;
void init()
{
    check = 1;
    for (int i = 0; i < 1005; i++)
        vv[i].clear();
    memset(vi, -1, sizeof(vi));
    memset(par, 0, sizeof(par));
    cin >> v >> e;
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        vv[x].push_back(y);
        vv[y].push_back(x);
    }
}
bool dfs(int i)
{
    vi[i] = 0;
    for (auto x : vv[i])
    {
        if (vi[x] == -1)
        {
            if (par[i] == 1)
                par[x] = 2;
            else
                par[x] = 1;
            if (dfs(x)==false)
                return false;// why notreturn dfs(x) coz: may be next vertices will out of loop for return true 
        }
        else if (par[i] == par[x])
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        int cnt = 0;
        for (int i = 1; i <= v; i++)
        {
            if (vi[i] == -1)
            {
                par[i] = 1;
                if (dfs(i) == false)
                    check = 0;
            }
        }
        if (check)
            cout << "YES";
        else
            cout << "NO";
        cout<<endl;
    }
}