#include<bits/stdc++.h>
using namespace std;
string tong(string a,string b)
{
    string s="";
    if(a.size()>b.size()) b.insert(0,a.size()-b.size(),'0');
    else a.insert(0,b.size()-a.size(),'0');
    // cout<<a<<endl;
    int nho=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        int sum=a[i]+b[i]-'0'-'0'+nho;
        
        nho=sum/10;
        s.insert(0,1,sum%10+'0');
    }
    if(nho) s.insert(0,1,'1');
    
    return s;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
      string a,b;
    cin>>a>>b;
    cout<<tong(a,b);  
    cout<<endl;
    }
    
}