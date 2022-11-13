#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;cin.ignore();
    while(t--)
    {
        
        string a;
        getline(cin,a);
        vector<string> vv;
        stringstream ss(a);
        string tok;
        while(ss>>tok)
        {
            vv.push_back(tok);
        }
        for(int i=vv.size()-1;i>=0;i--)
        {
            cout<<vv[i]<<" ";
        }
        cout<<endl;
    }
}