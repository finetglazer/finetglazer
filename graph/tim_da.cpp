#include <bits/stdc++.h>
using namespace std;
char a[505][505];
int s1,s2;
int n,m;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
void init()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if(a[i][j]=='S')
            {
                s1=i;
                s2=j;
            } 
        }
    
}
bool bfs(int dem,int fix,int fiy,int cur)
{
    if(dem>2) return false;
    for(int i=0;i<4;i++)
    {
        int u=fix+dy[i];
        int v=fiy+dx[i];
        if(u<1 || v< 1 || u>n || v>m) continue;
        if(a[u][v]=='.')
        {
            a[u][v]='*';
            if(cur!=i && a[fix][fiy]!='S')
            {
                if(bfs(dem+1,u,v,i)) return true;
            }
            else 
            {
                if(bfs(dem,u,v,i)) return true;
            }
            a[u][v]='.';
        } 
        else if(a[u][v]=='T') 
        {
            if(cur!=i && a[fix][fiy]!='S' )
            {   
                if(dem+1>2) return false;
                else return true;
            }
            if(dem > 2) return false;
            else return true;
            
        }
    }
    return false;
}
void cal()
{
    if(bfs(0,s1,s2,0)) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        cal();  
    }
}