#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    map<string,int> mp;
    while(t--)
    {      
        string a;
        getline(cin,a);
        mp[a]++;
        
    }
    int cnt=0;
    for(pair<string,int> x:mp)
    {
        if(x.second!=0) cnt++;
    }
    cout<<cnt;
    cout<<endl;
}