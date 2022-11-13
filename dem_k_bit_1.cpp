#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> vv;
        while(n!=1)
        {
            vv.push_back(n%2);
            n/=2;
        }
        int ans=0;
        for(auto &i:vv)
        cout<<i<<" ";
        cout<<endl;
    }
}