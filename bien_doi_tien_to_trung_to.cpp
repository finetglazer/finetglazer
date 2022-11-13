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
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='*' || s[i]=='/' || s[i]=='+' || s[i]=='-')
            {
                string t1="";
                t1+=st.top();
                st.pop();
                string t2="";
                t2+=st.top();
                st.pop();
                string tmp="";
                tmp+="(";
                tmp+=t1;
                tmp+=s[i];
                tmp+=t2;
                tmp+=")";
                st.push(tmp);
            }
            else{
                string num="";
                num+=s[i];
                st.push(num);
            }
        }
        while(!st.empty())
        {
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
}