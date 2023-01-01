#include<bits/stdc++.h>
using namespace std;
// tao node
int preindex;
void printPost(int bg,int ed,int pre[],int in[],map<int,int> mp)
{
    if(bg>ed)
    {
        // preindex++;
        // cout<<in[bg]<<" ";
        return;
    }
    int indx=mp[pre[preindex]];
    preindex++;
    // cout<<indx<<" ";
    printPost(bg,indx-1,pre,in,mp);
    printPost(indx+1,ed,pre,in,mp);
    cout<<in[indx]<<" ";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        preindex=0;
        int n;
        cin>>n;
        int pre[n+5];
        int in[n+5];
        for(int i=0;i<n;i++)
            cin>>in[i];
        for(int i=0;i<n;i++)
            cin>>pre[i];
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[in[i]]=i;
        }
        printPost(0,n-1,pre,in,mp);
        // cout<<preindex<<endl;
        cout<<endl;
    }
}