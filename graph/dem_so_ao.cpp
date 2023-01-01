#include<bits/stdc++.h>
using namespace std;
int dx[8] = {-1,0,1,-1,1,-1,0,1};
int dy[8] = {-1,-1,-1,0,0,1,1,1};
int main()
{
    int n,m;
    cin>>n>>m;
    char a[105][105];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    queue<pair<int,int>> qu;
    int cnt=0;
    pair<int,int> pr;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='W')
            {
                cnt++;
                qu.push({i,j});
                int tmp=0;
                while(qu.size()!=0)
                {
                    
                    pr=qu.front();
                    a[pr.first][pr.second]='.';
                    qu.pop();
                    int u,v;
                    for(int k=0;k<8;k++)
                    {
                        u=pr.first+dy[k];v=pr.second+dx[k];
                        if(u>=1 and u<=n and v>=1 and v<=m and a[u][v]=='W') 
                        {
                            qu.push({u,v});
                        }
                    }
                    
                }
                
            }
        }
    }
    cout<<cnt;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m;j++)
    //     {
    //         cout<<a[i][j];
    //     }
    //     cout<<endl;
    // }
}