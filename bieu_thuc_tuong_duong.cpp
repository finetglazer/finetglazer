#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        stack<char> st1,st2;
        st2.push('+');
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' && i==0) 
            {
                st2.push(s[i]);
            }
            if(isalpha(s[i])) st1.push(s[i]);
            else{
                if(s[i]=='+' || s[i]=='-')
                {
                    if(st2.top()=='+')
                        st1.push(s[i]);

                    else
                    {
                        if(s[i]=='+') st1.push('-');
                        else st1.push('+');
                    }
                }
                else{
                    if(s[i]=='(' && i>0)
                    {
                        st2.push(st1.top());
                    }
                    else{
                        st2.pop();
                    }
                }
            }
        }
        string ans="";
        while(st1.size()!=0)
        {
            ans=st1.top()+ans;
            st1.pop();
        }
        cout<<ans;
        cout << endl;
    }
}
