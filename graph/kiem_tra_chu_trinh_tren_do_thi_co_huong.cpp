#include<bits/stdc++.h>
using namespace std;
int v,e;
vector<int> vv[1005];
int lev[1005];
bool vi[1005];
void nhap()
{
    memset(vi,false,sizeof(vi));
    for(int i=0;i<1005;i++)
        vv[i].clear();
    memset(lev,0,sizeof(lev));
    int x,y;
    cin>>v>>e;
    for(int i=0;i<e;i++)
    {
        cin>>x>>y;
        vv[x].push_back(y);
        lev[y]++;
    }
}
bool checkWay(vector<int> vv[1005])
{
    int cnt=0;
    queue<int> qu;
    for(int i=1;i<=v;i++)
    {
        if(lev[i]==0)
        {
            qu.push(i);
            cnt++;
        } 
    }
    int cur;
    while(qu.size()!=0)
    {
        cur=qu.front();
        qu.pop();
        for(auto x:vv[cur])
        {
            lev[x]--;
            if(lev[x]==0)
            {
                qu.push(x);
                cnt++;
            }
        }
    }
    if(cnt!=v) return false;
    else return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        nhap();
        if(checkWay(vv)==0) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}