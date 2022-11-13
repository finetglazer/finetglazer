#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int k;
        cin>>k;
        cin.ignore();
        string x;
        getline(cin,x);
        stringstream ss(x);
        string tok;
        set<char> st;
        while(ss>>tok)
        {
            for(int i=0;i<tok.size();i++)
            {
                st.insert(tok[i]);
            }
        }
        for(auto &x: st)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}