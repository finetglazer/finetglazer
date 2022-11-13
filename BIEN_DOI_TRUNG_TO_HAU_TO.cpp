#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<char,int> mp;
    string k="+-*/^()";
    mp[k[0]]=1;
    mp[k[1]]=1;
    mp[k[2]]=2;
    mp[k[3]]=2;
    mp[k[4]]=3;
    mp[k[5]]=0;
    mp[k[6]]=0;
    // for(auto &x : mp) cout<<x.first<<" "<<x.second<<endl;
    int t;
    cin>>t;
   
    while (t--)
    {
        string s;
        cin>>s;
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            // cout<<i<<" ";
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^')
            {
                if(!st.empty())
                {
                    while(mp[st.top()] >= mp[s[i]])
                    {
                        cout<<st.top();
                        st.pop();
                        if(st.empty()) break;
                    }
                    st.push(s[i]);
                }
                else{
                    st.push(s[i]);
                }
            }
            else if(s[i]=='(') st.push(s[i]);
            else if(s[i]==')')
            {
                char x=st.top();
                while(x!='(')
                {
                    if(x!='(' || x!=')')
                        cout<<x;
                    st.pop();
                    x=st.top();
                }
                st.pop();
            }
            else cout<<s[i];
            // cout<<endl;
        }
        while(!st.empty())
        {
            if(st.top() !='(' && st.top() !=')')
                cout<<st.top();
            st.pop();
        }
        cout<<endl;
        /* code */
    }
    
}

