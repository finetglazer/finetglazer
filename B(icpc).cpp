#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<int> st;
        // -1;
        st.push(-1);
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else{
                if(st.size()==1 || s[st.top()]==')')
                {
                    st.push(i);
                }
                else{
                    st.pop();
                    ans=max(ans,i-st.top());
                    //  cout<<ans<<" ";
                }
            }
        }
       cout<<ans<<endl;
        // cout<<endl;
    }
}
