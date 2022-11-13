#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(') 
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty()) return false;
            if((st.top()== '{' && s[i]=='}') || (st.top()== '(' && s[i]==')') || (st.top()== '[' && s[i]==']')) 
                st.pop();
        }
    }
    return st.empty();
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()==0) cout<<"YES";
        else
        {
            if(check(s)) cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }
}