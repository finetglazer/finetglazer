#include<bits/stdc++.h>
using namespace std;
int parent[1005];
int sz[1005];
vector<pair<int,int>> vv;
int v,e;
void nhap()
{
    
    for(int i=0;i<1005;i++) vv.clear();
    int x,y;
    cin>>v>>e;
    for(int i=1;i<=v;i++)
    {
        parent[i]=i;
        sz[i]=1;
    } 
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        vv.push_back({x,y});
    }
}
// dsu 
int find(int i)
{
    if(i==parent[i]) return i;
    return parent[i]=find(parent[i]);
}
bool un(int x,int y)
{
    x=find(x);
    y=find(y);
    if(x==y) return false;
    else if(sz[x]<sz[y])
    {
        parent[y]=x;
        sz[y]+=sz[x];
    }    
    else{
        parent[x]=y;
        sz[x]+=sz[y];
    }
    return true;
}
bool cal()
{
    for(auto x: vv)
    {
        if(un(x.first,x.second)==false) return true ;

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
        if(cal())
            cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
