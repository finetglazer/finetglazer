#include<bits/stdc++.h>
using namespace std;
int v,e,m,color[1005];
vector<int> vv[1005];
int check;
void init()
{
    check=1;
    memset(color,0,sizeof(color));
    for(int i=0;i<1005;i++)
        vv[i].clear();
    cin>>v>>e>>m;
    int x,y;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        vv[x].push_back(y);
        vv[y].push_back(x);
    }
}
bool isSafe(int i,int j)
{
    for(auto x:vv[i])
    {
        if(color[x]==j) return false;
    }
    return true;
}
void Try(int i)
{
    for(int j=1;j<=m;j++)
    {
        if(isSafe(i,j))
        {
            color[i]=j;
            if(i==v) check=0;
            else 
            {
                Try(i+1);
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        init();
        Try(1);
        if(check) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
}