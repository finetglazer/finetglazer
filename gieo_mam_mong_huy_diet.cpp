#include<bits/stdc++.h>
using namespace std;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+5][m+5];
        queue<pair<pair<int,int>,int>> qu;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==2)
                {
                    qu.push({{i,j},0});
                }
            }
        }
        pair<pair<int,int>,int> cur;
        while(qu.size()!=0)
        {
            cur=qu.front();
            qu.pop();
            for(int i=0;i<4;i++)
            {
                int u=cur.first.first+dy[i];
                int v= cur.first.second+dx[i];
                if(u>=0 && u<n && v>=0 && v<m && a[u][v]==1)
                {
                    a[u][v]=2;
                    qu.push({{u,v},cur.second+1});
                }
            }
        }
        bool d=true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==1) 
                {
                    cout<<"-1";
                    d=false;
                    break;
                }
            }
            if(d==false) break;
        }
        if(d)
        {
            cout<<cur.second;
        }
        cout<<endl;
        
    }
}