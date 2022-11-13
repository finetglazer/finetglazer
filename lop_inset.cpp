#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in("DATA.in");
    int n,m;
    in>>n>>m;
    int a[1005],b[1005];
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
       in>>a[i];
       mp.insert({a[i],1}); 
    } 
    for(int i=0;i<m;i++)
    {
       in>>b[i]; 
        if(mp[b[i]]==1) mp[b[i]]=2;
    } 
    for(auto &x:mp)
    {
        if(x.second==2) cout<<x.first<<" ";
    }
    in.close();
}