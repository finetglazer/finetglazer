#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,m;
        cin>>n>>k>>m;
        ll a[n];
        ll b[k];
        ll c[m];
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll j=0;j<k;j++)cin>> b[j];
        for(ll i=0;i<m;i++) cin>>c[i];
        set<ll> st;
        int id1=0;
        int id2=0;
        int id3=0;
        while(id1<n && id2<k && id3<m)
        {
            if(a[id1]==b[id2] && b[id2]==c[id3])
            {
                st.insert(a[id1]);
                id1++;id2++;id3++;
            }
            else if(a[id1] < b[id2]) ++id1;
            else if(b[id2] < c[id3]) ++id2;
            else ++id3;
        }
        if(st.size()==0) cout<<"-1";
        for(auto & x:st) cout<<x<<" ";
        cout<<endl;
    }
}