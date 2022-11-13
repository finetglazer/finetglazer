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
        string af="";
        af+=st.top();
        // cout<<af;
        stack<char> sk;
        string aft="";
        for(int i=0;i<af.size();i++)
        {
            if(af[i]=='*' || af[i]=='/' || af[i]=='+' || af[i]=='-')
            { 
                if(!sk.empty())
                {
                    while(mp[sk.top()]>=mp[af[i]])
                    {
                        aft+=sk.top();
                        sk.pop();
                        if(sk.empty()) break;
                    }
                }
                sk.push(af[i]);
            }
            else if(af[i]=='(')
            {
                sk.push(af[i]);
            }
            else if(af[i]==')')
            {
                char cur=sk.top();
                sk.pop();
                while(cur!='(')
                {
                    aft+=cur;
                    cur=sk.top();
                    sk.pop();
                }
            }
            else 
            {
                aft+=af[i];
            }
        }
        stack<int> stk;
        for(int i=0;i<aft.size();i++)
        {
            if(aft[i]=='*' || aft[i]=='/' || aft[i]=='+' || aft[i]=='-')
            {
                int s1=stk.top();
                stk.pop();
                int s2=stk.top();
                stk.pop();
                if(aft[i]=='+') stk.push(s1+s2);
                if(aft[i]=='*') stk.push(s1*s2);
                if(aft[i]=='-') stk.push(s2-s1);
                if(aft[i]=='/') stk.push(s2/s1);
            }
            else{
                stk.push(aft[i]-'0');
            }
        }
        cout<<stk.top();
        cout<<endl;
    }
}