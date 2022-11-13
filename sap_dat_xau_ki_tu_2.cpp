#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        vector<int> vv;
        for(auto &i: mp)
        {
            vv.push_back(i.second);
        }
        sort(vv.begin(),vv.end());
        int ans=vv[vv.size()-1]-1;
        ans*=(n-1);
        for(int i=0;i<vv.size()-1;i++)
        {
            ans-=vv[i];
        }
        
        if(ans<=0) cout<<"1";
        else cout<<"-1";
        cout<<endl;
    }
}