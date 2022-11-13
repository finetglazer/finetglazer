#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    stack<int> st;
    string s;
    while(t--)
    {
        getline(cin,s);
        vector<string> vv;
        stringstream ss(s);
        string tok;
        while(ss>>tok)
        {
            vv.push_back(tok);
        }
        if(vv[0]=="PUSH") 
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
        else if(vv[0]=="PRINT")
        {
            if(st.empty()) cout<<"NONE";
            else cout<<st.top();
            cout<<endl;
        } 
        else 
        {
            if(!st.empty()) st.pop();
            else continue;
        }
    }
}