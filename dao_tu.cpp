#include<bits/stdc++.h>
using namespace std;
void in(stack<string> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    string s;
    while(t--)
    {
        stack<string> st;
        getline(cin,s);
        stringstream ss(s);
        string tok;
        while(ss>>tok)
        {
            st.push(tok);
        }
        in(st);
    }
}