#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
int n, m;
int a[1005][1005];
int ans()
{
    int M[1005][1005] = {};
    queue<pair<int, int>> q;
    pair<int, int> p;
    q.push({1, 1});
    M[1][1] = 0;
    while(q.size())
    {
        p = q.front();
        q.pop();
        if(p.fi + a[p.fi][p.se] <= n and !M[p.fi + a[p.fi][p.se]][p.se])
        {
            if(p.fi + a[p.fi][p.se] == n and p.se == m) return M[p.fi][p.se] + 1;
            M[p.fi + a[p.fi][p.se]][p.se] = M[p.fi][p.se] + 1;
            q.push({p.fi + a[p.fi][p.se], p.se});
        }
        if(p.se + a[p.fi][p.se] <= m and !M[p.fi][p.se + a[p.fi][p.se]])
        {
            if(p.fi == n and p.se + a[p.fi][p.se] == m) return M[p.fi][p.se] + 1;
            M[p.fi][p.se + a[p.fi][p.se]] = M[p.fi][p.se] + 1;
            q.push({p.fi, p.se + a[p.fi][p.se]});
        }
    }
    return -1;
}

int main()
{
    int t=1;
    cin >> t;
    while (t--)
    {
        
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> a[i][j];
        cout << ans;
        cout << endl;
    }
}
