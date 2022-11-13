#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main()
{
    ifstream in1;
    in1.open("DATA1.in");
    ifstream in2;
    in2.open("DATA2.in");
    vector<string> vv;
    vector<string> vvv;
    vector<string> v1;
    vector<string> v2;
    string s1;
    string s2;
    map<string,int> mp1,mp2;
    while(in1>>s1)
    {
        if(mp1[s1]==0)
        {
            v1.push_back(s1);
            mp1[s1]++;
        }
        
    }
    while (in2>>s2)
    {
        if(mp2[s2]==0)
        {
            v2.push_back(s2);
            mp2[s2]++;
        }
    }
    int n=v1.size();
    int m=v2.size();
    // cout<<n<<" "<<m;
    for(int i=0;i<n;i++)
    {
        bool k=true;
        for(int j=0;j<m;j++)
        {
            if(v1[i]==v2[j])
            {
                k=false;
                break;
            } 
        }
        if(k)
        {
            // cout<<v1[i]<<" ";
            vv.push_back(v1[i]);
            
        } 
    }
    
    for(int j=0;j<m;j++)
    {
        bool k=true;
        for(int i=0;i<n;i++)
        {
            if(v2[j]==v1[i])
            {
                k=false;
                break;
            } 
        }
        if(k)
            {
                // cout<<v2[j]<<" ";
                vvv.push_back(v2[j]);
            } 
    }
    sort(vv.begin(),vv.end());
    sort(vvv.begin(),vvv.end());
    for(int i=0;i<vv.size();i++)
    {
        string x=vv[i];
        for(int j=0;j<x.size();j++) 
        {
            if(x[j]>='A' && x[j]<='Z')
            {
                x[j]+=32;
            }
            
        }
        cout<<x<<" ";
    }
    cout<<endl;
    for(int i=0;i<vvv.size();i++)
    {
        string x=vvv[i];
        for(int j=0;j<x.size();j++) 
        {
            if(x[j]>='A' && x[j]<='Z')
            {
                x[j]+=32;
            }
        }
        cout<<x<<" ";
    }
}