#include<bits/stdc++.h>
using namespace std;
int v,e;
int vi[1005];
vector<pair<int,int>> vv;
int parent[1005];
int sz[1005];
void init()
{

    vv.clear();
    memset(vi,-1,sizeof(vi));
    cin>>v;
    for(int i=1;i<=v;i++)
    {
        parent[i]=i;
        sz[i]=1;
    }
    e=v-1;
    int x,y;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        vv.push_back({x,y});
    }
}
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
        sz[y]+=sz[x];
        parent[x]=y;
    }
    else{
        sz[x]+=sz[y];
        parent[y]=x;
    }
    return true;
} 
void cal()
{
    int check=1;
    int cnt=0;
    for(auto i:vv)
    {
        if(un(i.first,i.second)==false)
        {
            check=0;
            break;
        }
        else cnt++;
    }
    // cout<<cnt;
    if(check && cnt==e) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        init();
        cal();
    }
}