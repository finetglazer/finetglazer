#include<bits/stdc++.h>
using namespace std;
void in(stack<int> st)
{
    vector<int> vv;
    while(!st.empty())
    {
        vv.push_back(st.top());
        st.pop();
    }
    for(int i=vv.size()-1;i>=0;i--) cout<<vv[i]<<" ";
}
int main()
{
    int cnt=0;
    stack<int> st;
    string s;
    while(getline(cin,s))
    {
        cnt++;
        vector<string> vv;
        stringstream ss(s);
        string tok;
        while(ss>>tok)
        {
            vv.push_back(tok);
        }
        if(vv[0]=="push") 
        {
            int k=0;
            for(int i=0;i<vv[1].size();i++)
            {
                k*=10;
                k+=(vv[1][i]-'0');
            }
            // cout<<k<<" ";
             st.push(k);
        }
        else if(vv[0]=="show")
        {
            if(st.empty()) cout<<"empty";
            else in(st);
            cout<<endl;
        } 
        else st.pop();
        
    }
}