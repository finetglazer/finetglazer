#include <bits/stdc++.h>
using namespace std;
vector<int> vv[1005];
int from[1005];
int v, e;
void nhap()
{
    for (int i = 0; i < 1005; i++)
        vv[i].clear();
    memset(from, -1, sizeof(from));
    cin >> v >> e;
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        vv[x].push_back(y);
        vv[y].push_back(x);
    }
}
bool dfs(int i,int par)
{
    from[i]=1;
    for (auto x : vv[i])
    {
        if (from[x] == -1)
        {
            if (dfs(x,i))
            {
                return true;
            }
        }
        else if (x != par)
        {
            return true;
        }
    }
    return false;
}
bool bfs(int i)
{
    queue<int> qu;
    qu.push(i);
    from[i]=0;
    int cur;
    while(qu.size()!=0)
    {
        cur=qu.front();
        qu.pop();
        for(auto x:vv[cur])
        {
            if(from[x]==-1)
            {
                from[x]=cur;
                qu.push(x);
            }
            else if(x!= from[cur])
                return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nhap();
        // froom[1] = 0;
        bool d = true;
        for (int i = 1; i <= v; i++)
        {
            if (from[i] == -1)
            {
                from[i] = 0;
                if (dfs(i,0) == 1)
                {
                    cout << "YES";
                    d = false;
                    break;
                }
            }
        }
        if (d )
            cout << "NO";
        cout << endl;
    }
}