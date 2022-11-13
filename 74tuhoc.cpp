#include<bits/stdc++.h>
using namespace std;
string rform(string a)
{
    stringstream ss(a);
    string tok;
    vector<string> v;
    string kk;
    while(ss>>tok)
    {
        for(int i=0;i<tok.size();i++)
        {
            if(i==0) tok[i]=toupper(tok[i]);
            else tok[i]=tolower(tok[i]);
            
        }
        v.push_back(tok);
    }
    for(int i=0;i<v.size();i++)
    {
        kk+= v[i][0];
        for(int j=1;j<v[i].size();j++)
        {
            kk += v[i][j] ;
        }   
        kk += " ";
    }
    return kk;
}
int main()
{
    string a;
    getline(cin,a);
    a=rform(a);
    cout<<a;
}