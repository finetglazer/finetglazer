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
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        stack<ll> st;
        st.push(0);
        for(ll i=1;i<n;i++)
        {
            if(a[i]<a[st.top()])
            {
                while(a[i]<a[st.top()] )
                {
                    ll tmp=st.top();
                    st.pop();
                    if(st.size())
                    {
                        ans=max(ans,(i-st.top()-1)*a[tmp]);
                    }
                    else{
                        ans=max(ans,a[tmp]*i);
                        break;
                    }
                }
                st.push(i);
                //i-st.top()
            }
            else st.push(i);
        }
        ll j=n;
        // cout<<ans;
        while(st.size())
        {
            ll tmp=st.top();
            st.pop();
            if(st.size())
            {
                ans=max(ans,(j-st.top()-1)*a[tmp]);
            }
            else{
                ans=max(ans,a[tmp]*j);
                break;
            }

            // j - i
        }
        cout<<ans;
        cout<<endl;
        // 0 
    }
}