#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        vector<int> v;
        cin>>n>>k;
        int x;
        set<int> st;
        map<int,int> mp;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            // v.push_back(x);
            st.insert(x);
            mp[x]++;
        }
        for(int j=1;j<=k;j++)
        {
            cin>>x;
            // vv.push_back(x);
            st.insert(x);
            mp[x]++;
        }
        for(auto &l: st)
        {
            cout<<l<<" ";
        }
        cout<<endl;
        for(pair<int,int> pr: mp)
        {
            if(pr.second==2) v.push_back(pr.first);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
        /* code */
    }
    
}