#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in;
    in.open("DOCUMENT.in");
    int n;
    in>>n;
    string str;
    map<string,int> mp;
    while(getline(in,str))
    {
        for(int i=0;i<str.size();i++)
        {
            str[i]=tolower(str[i]);
            if(str[i]==',' || str[i]=='.' || str[i]=='?' || str[i]=='!' ||
           str[i]==':' || str[i]==';'|| str[i]=='-' || str[i]=='/' ||
           str[i]=='(' || str[i]==')')
           {
               str[i]=' ';
           }
        
        }
    
        stringstream ss(str);
        string token;
        while(ss>>token) 
        {
            mp[token]++;
        }
        
        // cout<<str<<endl;
    }
    int max=0;
    for(pair<string,int> pa:mp)
    {
        if(pa.second>max) max=pa.second;
    } 
    while(max)
    {
        for(pair<string,int> pa:mp)
        {
            if(pa.second==max) cout<<pa.first<<" "<<pa.second<<endl;      
        }
        max--;
    }
        
    
    
       
    
   
       
    in.close();
}