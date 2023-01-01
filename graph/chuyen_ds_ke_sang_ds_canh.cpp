#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v;
    cin>>v;
    cin.ignore();
    vector<int> vv[1000];
    string tmp;
    for(int i=1;i<=v;i++)
    {
        getline(cin,tmp);
        stringstream ss(tmp);
        string s;
        while(ss>>s)
        {
            int k=stoi(s);
            vv[i].push_back(k);
        }
        
        //  cin.ignore();
    }
    for(int i=1;i<=v;i++)
    {  
        for(auto j:vv[i])
        {
            if(j>i)
            cout<<i<<" "<<j<<endl;
        }
    }
}