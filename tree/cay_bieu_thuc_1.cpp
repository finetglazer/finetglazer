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
        // cay nhi phan stack
        stack<string> st;
        for(int i=0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
                string tmp="";
                tmp+=s[i];
                // cout<<tmp<<" ";
                st.push(tmp);
            }
            else{
                string x1,x2;
                x1=st.top();
                st.pop();
                x2=st.top();
                st.pop();
                x2+=s[i];
                x2+=x1;
                // cout<<x2<<endl;
                st.push(x2);
            }
        }
        cout<<st.top()<<endl;
    }
}