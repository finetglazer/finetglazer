#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    stack<ll> st;
    ll n;
    cin>>n; 
    ll x,y;
    while(n--)
    {
       
        cin>>x;
        if(x==1)
        {
            cin>>y;
            st.push(y);
        }
        else if(x==2)
        {
            if(!st.empty()) st.pop();
        }
        else
        {
            if(!st.empty()) cout<<st.top();
            else cout<<"Empty!";
            cout<<endl;
        }
    }
}