#include <bits/stdc++.h>
using namespace std;
int dx[8] = {-1,0,1,-1,1,-1,0,1};
int dy[8] = {-1,-1,-1,0,0,1,1,1};
bool visited[1005][1005];
int mt[1005][1005];
int n,m;
void bfs(int i, int j)
{
    queue<pair<int, int>> qu;
    qu.push({i, j});
    visited[i][j] = false;
    pair<int, int> cur;
    while (qu.size()!= 0)
    {
        cur = qu.front();
        qu.pop();
        for (int k = 0; k < 8; k++)
        {
            // cur.fi+dy[i]
            int u=cur.first+dy[k];
            int v=cur.second+dx[k];
            
            if(u>=1 && u<=n && v>=1 && v<=m && visited[u][v]==true && mt[u][v]==1 )
            {
                qu.push({u,v});
                visited[u][v]=false;
            } 
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(visited, true, sizeof(visited));

        cin >> n >> m;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> mt[i][j];
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (mt[i][j] == 1 && visited[i][j]==true)
                {
                    bfs(i,j);
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}