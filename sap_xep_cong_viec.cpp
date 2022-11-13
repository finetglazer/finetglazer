#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.second==p2.second) return p1.first>p1.second;
    return p1.second<p2.second;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int be[n+5],ed[n+5];
        for(int i=0;i<n;i++) 
            cin>>be[i];
        for(int i=0;i<n;i++) 
            cin>>ed[i];
        vector<pair<int,int>> vv;
        pair<int,int> pr;
        for(int i=0;i<n;i++)
        {
            pr.first=be[i];
            pr.second=ed[i];
            vv.push_back(pr);
        }
        sort(vv.begin(),vv.end(),cmp);
        // for(auto &i:vv)
        //     cout<<i.first<<" "<<i.second<<endl;
        int cnt=0;
        for(int i=0;i<vv.size();i++)
        {
            if(i==0)
            {
                cnt++;
                pr.first=vv[i].first;
                pr.second=vv[i].second;
            } 
            else{
                if(vv[i].first>=pr.second)
                {
                    cnt++;
                    pr.first=vv[i].first;
                    pr.second=vv[i].second;
                }
            }
        }
        cout<<cnt<<endl;
    }
}