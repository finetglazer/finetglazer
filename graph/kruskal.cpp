#include<bits/stdc++.h>
using namespace std;
struct edge
{
    int x,y,w;
};
bool cmp(edge a,edge b)
{
    return a.w<b.w;
}
int parent[1005];
int sz[1005];
vector<edge> vv;
int v,e;
void nhap()
{
    for(int i=0;i<1005;i++) vv.clear();
    int s1,s2,s3;
    cin>>v>>e;
    for(int i=1;i<=v;i++)
    {
        parent[i]=i;
        sz[i]=1;
    } 
    edge cur;
    for(int i=0;i<e;i++)
    {
        cin>>s1>>s2>>s3;
        cur.x=s1;
        cur.y=s2;
        cur.w=s3;
        vv.push_back(cur);
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
void kruskal()
{
    int len=0;
    int cnt=0;
    sort(vv.begin(),vv.end(),cmp);
    for(int i=0;i<e;i++)
    {
        int s1=vv[i].x;
        int s2=vv[i].y;
        int s3=vv[i].w;
        if(cnt==v-1)
            break;
        if(un(s1,s2))
        {
            len+=s3;
            cnt++;
        }
    }
    cout<<len;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        nhap();
        kruskal();
        cout<<endl;
    }
}
