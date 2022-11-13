#include<bits/stdc++.h>
using namespace std
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]!=0 && a[i]==a[i+1])
            {
                a[i]*=2;
                a[i+1]=0;
            }
        }
        vector<int> v,vv;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0) v.push_back(a[i]);
            else vv.push_back(a[i]);
        }
        for(int i=0;i<vv.size();i++) cout<<vv[i]<<" ";
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
    }
}