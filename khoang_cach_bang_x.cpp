#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int x;
        cin>>x;
        int a[n];
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        } 
        bool d=true;
        for(int i=0;i<n;i++)
        {
            if(mp[a[i]+x])
            {
               d=false;
               break;
            } 
        }
        if(d) cout<<"-1";
        else cout<<"1";
        cout<<endl;
    }
}