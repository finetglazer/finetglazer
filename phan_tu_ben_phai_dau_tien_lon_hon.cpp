#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=1;i<=n;i++) cin>>a[i];
        stack<int> st;
        st.push(a[n]);
        vector<int> vv;
        vv.push_back(-1);
        for(int i=n-1;i>=1;i--)
        {
            if(a[i]<st.top())
            {
                vv.push_back(st.top());
                st.push(a[i]);
            } 
            else{
                bool d=true;
                while(st.top()<=a[i])
                {
                    st.pop();
                    if(st.empty()) {
                        d=false;
                        break;
                    }
                }
                if(d==false) vv.push_back(-1);
                 else{
                    vv.push_back(st.top());
                 }
                 st.push(a[i]);
            }
        }
        for(int i=n-1;i>=0;i--) cout<<vv[i]<<" ";
        cout<<endl;
    }
}