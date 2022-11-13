#include<bits/stdc++.h>
using namespace std;
void ans(string s)
{
    int end=0;
    int cnt=0;
    stack<char> st;
    int j=0;
    for(int i=0;i<s.size();i++,j++)
    {
        if(s[i]==')') cnt++;
        else break;
    }
    for(;j<s.size();j++)
    {
        if(s[j]=='(')
        {
            st.push(s[j]);
        }
        else 
        {
            if(!st.empty()) st.pop();
            else cnt++;
        }
    }
    // cout<<st.size()<<" "<<cnt;
    // cout<<endl;
    int hal=cnt/2;
    end+=hal;
    cnt%=2;
    end+=cnt;
    int k=st.size();
    k+=cnt;
    end+=(k/2);
    cout<<end<<endl;
}
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        ans(s);
        /* code */
    }
    
}