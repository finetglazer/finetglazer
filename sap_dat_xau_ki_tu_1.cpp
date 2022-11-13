#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;cin>>s;
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        vector<int> vv;
        for(auto &i:mp)
        {
            vv.push_back(i.second);
        }
        sort(vv.begin(),vv.end());
        int sum=0;
        for(int i=0;i<vv.size()-1;i++)
        {
          sum+=vv[i];
        }
        int k=vv[vv.size()-1]-sum;
        if(k>=2) cout<<"-1";
        else cout<<"1";
        cout<<endl;
    }
}