#include<bits/stdc++.h>
using namespace std;
int color[1005];
vector<int> vv[1005];
int v,e;
void nhap()
{
    memset(color,0,sizeof(color));
    for(int i=0;i<1005;i++)
        vv[i].clear();
    cin>>v>>e;
    int x,y;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        vv[x].push_back(y);
    }
}
bool dfs(int i)
{
    color[i]=1;
    for(auto x: vv[i])
    {
        if(color[x]==0)
        { 
            if(dfs(x))
                return true;
        }
        else if(color[x]==1) return true;
    }    
    color[i]=2;
    return false;
}
bool checkWay(vector<int> vv[1005])
{
    // 0 white, 1 grey, 2 black
    for(int i=1;i<=v;i++)
    {
        if(dfs(i)) return true;
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        nhap();
        if(checkWay(vv)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;

    }
}