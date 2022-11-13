#include<bits/stdc++.h>
#define  fi first
#define  se second
using namespace std;
int a,b,c;
char hcn[35][35][35];
int f[35][35][35];
pair<pair<int,int>,int> S,E;
int dx[6]={0,0,1,-1,0,0};
int dy[6]={0,0,0,0,-1,1};
int dz[6]={1,-1,0,0,0,0};
inline bool check(int i, int j, int k)
{
    return (i >= 0 and i < a and j >= 0 and j < b and k >= 0 and k < c and hcn[i][j][k] != '#' and !f[i][j][k]);
}
inline int cal()
{
    queue<pair<pair<int, int>, int>> q;
    q.push(S);
    f[S.fi.fi][S.fi.se][S.se] = 1;
    pair<pair<int, int>, int> top;
    while(q.size())
    {
        top = q.front();
        q.pop();
        for(int i = 0; i < 6; ++i)
        {
            int u=top.fi.fi + dx[i];
            int v=top.fi.se + dy[i];
            int r=top.se + dz[i];
            if(check(u,v,r))
            {
                if(u == E.fi.fi and v == E.fi.se and r == E.se)
                    return f[top.fi.fi][top.fi.se][top.se];
                q.push({{top.fi.fi + dx[i], top.fi.se + dy[i]}, top.se + dz[i]});
                f[top.fi.fi + dx[i]][top.fi.se + dy[i]][top.se + dz[i]] = f[top.fi.fi][top.fi.se][top.se] + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin >> a >> b >> c;
        for(int i = 0; i < a; ++i)
        {
            for(int j = 0; j < b; ++j)
            {
                for(int z = 0; z < c; ++z)
                {
                    cin >> hcn[i][j][z];
                    if(hcn[i][j][z] == 'S')
                        S = {{i, j}, z};
                    else if(hcn[i][j][z] == 'E')
                        E = {{i, j}, z};
                }
            }
        }
        cout<<cal()<<endl;
        memset(f, 0, sizeof(f));
    }
}