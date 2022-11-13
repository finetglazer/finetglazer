#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> vv;
        vv.push_back(a[0]*a[1]);
        for(int i=1;i<=n-2;i++)
        {
            vv.push_back(a[i-1]*a[i+1]);
        }
        vv.push_back(a[n-2]*a[n-1]);
        for(int i=0;i<vv.size();i++) 
        {
            cout<<vv[i]<<" ";
        }
        cout<<endl;
    }
}