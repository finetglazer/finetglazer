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
        stack<string> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/')
            {
                string ans="";
                string t1="";
                t1+=st.top();
                st.pop();
                string t2="";
                t2+=st.top();
                st.pop();
                ans+='(';
                ans+=t2;ans+=s[i];ans+=t1;
                ans+=')';
                st.push(ans);
            }
            else 
            {
                string tmp="";
                tmp+=s[i];
                st.push(tmp);
            }
        }
        cout<<st.top();
        cout<<endl;
    }
}