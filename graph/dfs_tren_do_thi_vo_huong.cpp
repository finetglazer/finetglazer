#include <bits/stdc++.h>
using namespace std;
int v, e, fi;
vector<int> edge[5005];
bool visited[5005];
void dfs(int i)
{
    cout << i << " ";
    visited[i] = false;
    for (auto x : edge[i])
    {
        if (visited[x] == true)
            dfs(x);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for(int i=0;i<5005;i++)
        {
            edge[i].clear();
        }
        memset(visited, true, sizeof(visited));
        cin >> v >> e >> fi;
        int x, y;
        for (int i = 1; i <= e; i++)
        {
            cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }

        dfs(fi);
        cout<<endl;
    }
}