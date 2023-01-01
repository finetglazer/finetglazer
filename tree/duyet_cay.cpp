#include<bits/stdc++.h>
using namespace std;
int preindex;
void traversalpost(map<int,int> mp,int pre[],int in[],int be,int ed)
{
    if(be>ed) return;
    int index=mp[pre[preindex]];
    preindex++;
    traversalpost(mp,pre,in,be,index-1);
    traversalpost(mp,pre,in,index+1,ed);
    cout<<in[index]<<" ";
}
int main()
{
    preindex=0;
    int n;
    cin>>n;
    int pre[n+5];
    int in[n+5];
    for(int i=0;i<n;i++) cin>>pre[i];
    for(int i=0;i<n;i++) cin>>in[i];
    map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[in[i]]=i;
    traversalpost(mp,pre,in,0,n-1);
}