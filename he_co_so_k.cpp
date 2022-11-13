#include<bits/stdc++.h>
#define ll long long
using namespace std;
void cal(string a,string b,ll k)
{
    ll len1=a.size();
    ll len2=b.size();
    if(len1>len2)
    {
        ll del=len1-len2;
        string tmp="";
        for(ll i=0;i<del;i++) tmp+="0";
        b=tmp+b;
    }
    else
    {
        ll del=len2-len1;
        string tmp="";
        for(ll i=0;i<del;i++) tmp+="0";
        a=tmp+a;
    }
    
    ll n=a.size();
   string res="";
    ll nho=0;
    ll d=0;
    for(ll i=n-1;i>=0;i--)
    {
        ll sum=(a[i]-'0')+(b[i]-'0')+nho;
        nho=sum/k;
        res=char(sum%k+'0')+res;
    }
    if(nho!=0) res=char(nho+'0')+res;
    cout<<res;  
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll k;
        string a,b;
        cin>>k>>a>>b;
        cal(a,b,k);
    }
}