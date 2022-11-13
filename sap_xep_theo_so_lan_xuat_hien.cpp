#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
bool cmp(int a,int b)
{
    if(mp[a]!=mp[b])    return mp[a]>mp[b];
    else return a<b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        vector<int> vv;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            vv.push_back(a[i]);
            mp[a[i]]++;
        }
        sort(vv.begin(),vv.end(),cmp);
        for(int i=0;i<n;i++)
        {
            cout<<vv[i]<<" ";
        }
        mp.erase(mp.begin(),mp.end());
        cout<<endl;
    }
}