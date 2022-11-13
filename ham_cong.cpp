#include<bits/stdc++.h>
using namespace std;
void add(string &a,string &b)
{
    vector<int> v1,v2,vv;
    int len1=a.size();
    int len2=b.size();
    // int maxl;
    if(len1 < len2 )
    {
        for(int i=len1;i<len2;i++) 
           v1.push_back(0);
    }
    else 
    {
        for(int i=len2;i<len1;i++) v2.push_back(0);
    }
    for(int i=0;i<a.size();i++)
    {
        v1.push_back(a[i]-'0');
    }
    for(int i=0;i<b.size();i++)
    {
        v2.push_back(b[i]-'0');
    }
    int nho=0;
    for(int i=v1.size()-1;i>=0;i--)
    {
        int sum=v1[i]+v2[i]+nho;
        
        nho=sum/10;
        vv.push_back(sum%10);
        // cout<<sum<<" ";
    }
    if(nho) vv.push_back(1);
    reverse(vv.begin(),vv.end());
    for(int i=0;i<vv.size();i++) cout<<vv[i];
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        add(a,b);
    }
    
}