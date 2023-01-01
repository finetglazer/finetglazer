#include <bits/stdc++.h>
using namespace std;
int toNum(string s)
{
    int num=0;
    for(int i=0;i<s.size();i++)
    {
        num*=10;
        num+=(s[i]-'0');
    }
    return num;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s1, s2;
        getline(cin,s1);
        getline(cin,s2);
        // cout<<s1<<endl<<s2;
        stack<pair<int,int>> st,st1,st2;
        for(int i=0;i<s1.size();i++)
        {
            if(isdigit(s1[i]))
            {
                string tmp="";
                while(isdigit(s1[i]))
                {
                    tmp+=s1[i];
                    i++;
                }
                
                pair<int,int> pa;
                pa.first=toNum(tmp);
                i+=3;
                string tp="";
                while(isdigit(s1[i]))
                {
                    tp+=s1[i];
                    i++;
                }
                i+=2;
                pa.second=toNum(tp);
                st1.push(pa);
            }
        }
        for(int i=0;i<s2.size();i++)
        {
            if(isdigit(s2[i]))
            {
                string tmp="";
                while(isdigit(s2[i]))
                {
                    tmp+=s2[i];
                    i++;
                }
                
                pair<int,int> pa;
                pa.first=toNum(tmp);
                i+=3;
                string tp="";
                while(isdigit(s2[i]))
                {
                    tp+=s2[i];
                    i++;
                }
                i+=2;
                pa.second=toNum(tp);
                st2.push(pa);
            }
        }
        while(st1.size() && st2.size())
        {
            if(st1.top().second>st2.top().second)
            {
                st.push(st2.top());
                st2.pop();
            }
            else if(st1.top().second<st2.top().second)
            {
                st.push(st1.top());
                st1.pop();
            }
            else 
            {
                st1.top().first+=st2.top().first;
                st.push(st1.top());
                st1.pop();
                st2.pop();
            }
        }
        while(st1.size())
        {
            st.push(st1.top());
            st1.pop();
        }
        while(st2.size())
        {
            st.push(st2.top());
            st2.pop();
        }
        while(st.size())
        {
            cout<<st.top().first<<"*x^"<<st.top().second;
            if(st.size()!=1) cout<<" + ";
            st.pop();
        }
        cout<<endl;
    }
}