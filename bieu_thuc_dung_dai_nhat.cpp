#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        stack<char> st;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') st.push(s[i]);
            else{
                if(!st.empty())
                {
                    st.pop();
                    ans+=2;
                    
                }
            }
        }
        cout<<ans<<endl;
    }
}