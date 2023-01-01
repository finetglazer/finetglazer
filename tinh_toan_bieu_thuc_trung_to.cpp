#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll tonum(string s)
{
    ll num=0;
    for(int i=0;i<s.size();i++)
    {
        num*=10;
        num+=(s[i]-'0');
    }
    return num;
}
int main()
{
    map<char,ll> mp;
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
    while (t--)
    {
        string aft="";
        string s;
        cin>>s;
        stack<char> st;
        for(ll i=0;i<s.size();i++)
        {
            // cout<<i<<" ";
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^')
            {
                if(!st.empty())
                {
                    while(mp[st.top()] >= mp[s[i]])
                    {
                        aft+=st.top();
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
                        aft+=x;
                    st.pop();
                    x=st.top();
                }
                st.pop();
            }
            else 
            {
                aft+=" ";
                while(s[i]>='0' && s[i]<='9')
                {
                    aft+=s[i];
                    i++;
                }
                i--;
                aft+=" ";
            }
        }
        while(!st.empty())
        {
            if(st.top() !='(' && st.top() !=')')
                aft+=st.top();
            st.pop();
        }
        // cout<<aft<<endl;
        stack<ll> sk;
        for(ll i=0;i<aft.size();i++)
        {
            if(aft[i]>='0' && aft[i]<='9')
            {
                string tmp="";
                while(aft[i]>='0' && aft[i]<='9')
                {
                    tmp+=aft[i];
                    i++;
                }
                ll temp=tonum(tmp);
                sk.push(temp);
                i--;
            }
            else if(aft[i]=='+' || aft[i]=='-' || aft[i]=='*' || aft[i]=='/') {
                ll s1,s2;
                s1=sk.top();
                sk.pop();
                s2=sk.top();
                sk.pop();
                if(aft[i]=='+') sk.push(s1+s2);
                if(aft[i]=='-') sk.push(s2-s1);
                if(aft[i]=='*') sk.push(s1*s2);
                if(aft[i]=='/') sk.push(s2/s1);  
            }
        }
        cout<<sk.top();
        cout<<endl;
    }  
}

