#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char> st1,st2;
    for(auto i: s)
    {
        if(i=='<')
        {
            if(st1.size())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        else if(i=='>')
        {
            if(st2.size())
            {
                st1.push(st2.top());
                st2.pop();
            }
        }
        else if(i=='-')
        {
            if(st1.size())
            {
                st1.pop();
            }
        }
        else{
            st1.push(i);
        }

    }
      while(st1.size())
        {
            st2.push(st1.top());
            st1.pop();
        }
        while(st2.size())
        {
            cout << st2.top();
            st2.pop();
        }
    }

