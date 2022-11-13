#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll cnt=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='2' ) cnt++;
    }
    ll ans=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            ans+=cnt;
        }
        if(s[i]=='2') cnt--;
    }
    cout<<ans;
}