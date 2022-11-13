#include<bits/stdc++.h>
using namespace std;
void tru(string &a,string &b)
{
    int s1=a.size();
    int s2=b.size();
    string n1,n2;
    if(s1>s2) 
    {
        n1=a;
        n2=b;
    }
    else if(s2>s1)
    {
        n1=b;
        n2=a;
    }
    else{
        if(a>b) 
        {
            n1=a;
            n2=b;
        }
        else 
        {
            n1=b;
            n2=a;
        }
    }
    vector<int> v1,v2,vv;
    for(int i=n2.size();i<n1.size();i++)
        v2.push_back(0);
    
    for(int i=0;i<n1.size();i++) v1.push_back(n1[i]-'0');
    for(int j=0;j<n2.size();j++) v2.push_back(n2[j]-'0');
    int nho=0;
    for(int i=v1.size()-1;i>=0;i--)
    {
        int minus=v1[i]-v2[i]+nho;
        if(minus<0) nho=-1;
        else nho=0;
        vv.push_back((minus+10)%10);
        
    }
    reverse(vv.begin(),vv.end());
    // for(int i=0;i<vv.size();i++) cout<<v1[i];
    // cout<<endl;
    // for(int i=0;i<v2.size();i++) cout<<v2[i];
    // cout<<endl;
    for(int i=0;i<vv.size();i++) 
        cout<<vv[i];
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        tru(a,b);
    }
}