#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        int a[n+5];
        int b[n+5];
        set<int> vv;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            vv.insert(a[i]);
            mp[a[i]]++;
        }
        for(int j=0;j<m;j++)
        {
            cin>>b[j];
            vv.insert(b[j]);
            mp[b[j]]++;
        }
        vector<int> v;
        for(pair<int,int> pr:mp)
        {
            if(pr.second==2) v.push_back(pr.first);
        }
        for(auto &x:vv) cout<<x<<" ";
        cout<<endl;
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        /* code */
        cout<<endl;
    }
    
}