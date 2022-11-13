#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in1,in2;
    in1.open("DATA1.in");
    in2.open("DATA2.in");
    string s1,s2;
    map<string,int> mp1,mp2;
    vector<string> v1,v2,vv;
    while(in1>>s1)
    {
        for(int i=0;i<s1.size();i++) s1[i]=tolower(s1[i]);
        if(mp1[s1]==0)
        {
            v1.push_back(s1);
            vv.push_back(s1);
        }   
        mp1[s1]++;
    }
    while(in2>>s2)
    {
        for(int i=0;i<s2.size();i++) s2[i]=tolower(s2[i]);
        if(mp2[s2]==0 && mp1[s2]==0)
        {
            vv.push_back(s2);
           
        }  
        if(mp2[s2]==0)
        {
             v2.push_back(s2);
        } 
        mp2[s2]++;
    }
    sort(vv.begin(),vv.end());
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<vv.size();i++)
    {
        cout<<vv[i]<<" ";
    }
    cout<<endl;
    // for(int i=0;i<v2.size();i++)
    // {
    //     for(int j=0;j<v1.size();j++)
    //     {
    //         if(v2[i]==v1[j]) cout<<v2[i]<<" ";
    //     }

    // }
    for(int i=0;i<v2.size();i++)
    {
        if(mp1[v2[i]]!=0)
        {
            cout<<v2[i]<<" ";
            mp1[v2[i]]=0;
        }
    }
}