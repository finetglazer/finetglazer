#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        for(ll i=0;i<n;i++) cin>>a[i];
        stack<ll> st;
        ll i=1;
        ll ans=0;
        st.push(0);
        while(i<n)
        {

            if(a[i]<a[st.top()])
            {
                ll cur=st.top();    
                st.pop();
                if(st.size()==0)
                {
                    if(a[cur]<=i) ans=max(ans,a[cur]);
                    st.push(i);
                    i++;
                }
                else{
                    ll tmp=i-st.top()-1;
                    if(tmp>=a[cur])
                    {
                        ans=max(ans,a[cur]);
                    }
                }
                
            }
            else 
            {
                st.push(i);
                i++;
            }
        }
        while(st.size())
        {
            ll cur=st.top();
            st.pop();
            if(st.size()==0)
            {
                if(a[cur]<=i) ans=max(ans,a[cur]);
            }
            else{
                ll tmp=i-st.top()-1;
                if(tmp>=a[cur])
                {
                    ans=max(ans,a[cur]);
                }
            }
        }
        cout<<ans<<endl;
    }
}