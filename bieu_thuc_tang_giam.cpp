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
        string ans="";
        stack<char> st;
        int cur=1;
        int max=cur;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I')
            {
                if(st.size()==0)
                {
                    ans+='1';
                    cur++;
                    max=cur;
                    st.push(s[i]);
                }
                else{
                    while(st.size()!=0)
                    {
                        st.pop();
                    }
                    for(int j=cur;j>=max;j--)
                    {
                        ans+=(j+'0');
                    }
                    st.push(s[i]);
                    max=cur+1;
                    cur++;

                }
            }
            else{
                st.push(s[i]);
                cur++;
            }
        }
        for(int j=cur;j>=max;j--)
        {
            ans+=(j+'0');
        }
        cout<<ans<<endl;
    }
}