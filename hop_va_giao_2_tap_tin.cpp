#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in1("DATA1.in");
    ifstream in2("DATA2.in");
    string tok1,tok2;
    set<string> ss;
    string s1="";
    string s2="";
    map<string,int> mp;
    while(in1>>tok1)
    {
        for(int i=0;i<tok1.size();i++) tok1[i]=tolower(tok1[i]);
        ss.insert(tok1);
         mp.insert({tok1,1});
    }
    while(in2>>tok1)
    {
        for(int i=0;i<tok1.size();i++) tok1[i]=tolower(tok1[i]);

        ss.insert(tok1);
        if(mp[tok1]==1) mp[tok1]=2;
    }
    for(auto &x:ss){
        cout<<x<<" ";
    }
    cout<<endl;
    vector<string> vv;
    for(auto x:mp)
    {
        if(x.second>1) cout<<x.first;
    }
    
    in1.close();
    in2.close();
}