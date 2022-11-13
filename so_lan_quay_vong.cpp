#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        int cnt=0;
        vector<ll> l;
        vector<ll> r;
        int tmp=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1]) l.push_back(a[i]);
            else
            {
                l.push_back(a[i]);
                break;
            } 
            tmp=i;
        }
        if(l.size()==n-1) cout<<"0"<<endl;
        else    cout<<l.size()<<endl;
        // for(int i=0;i<l.size();i++) cout<<l[i]<<" ";
        // cout<<endl;
        // for(int i=0;i<r.size();i++) cout<<r[i]<<" ";

        
    }
}