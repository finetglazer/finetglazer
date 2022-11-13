#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    ll n;
    while(t--)
    {
        queue<string> st;
        st.push("1");
        cin>>n;
        ll cnt=1;
        while(1)
        {
            string cur=st.front();
            st.pop();
            st.push(cur+"0");
            cnt++;
            if(cnt==n) break;
            st.push(cur+"1");
            cnt++;
            if(cnt==n) break;
        }
        cout<<st.back()<<endl;
    }
}