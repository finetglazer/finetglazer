#include<bits/stdc++.h>
using namespace std;
string tong(string a,string b)
{
    string s="";
    if(a.size()>b.size()) b.insert(0,a.size()-b.size(),'0');
    else a.insert(0,b.size()-a.size(),'0');
    int nho=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        int sum=(a[i]-'0')+(b[i]-'0')+nho;
        nho=sum/10;
        s.insert(s.begin(),sum%10+'0');
    }
    if(nho) s.insert(s.begin(),'1');
    return s;
}
string nhantung(string a,char b)
{
    string s="";
    int nho=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        int tich=(a[i]-'0')*(b-'0')+nho;
        nho=tich/10;
        s.insert(s.begin(),tich%10+'0');
    }
    if(nho) s.insert(s.begin(),nho+'0');
    return s;
}
string nhan(string a,string b)
{
    string s="";
    int l=b.size();
    string k;
    
    for(int i=b.size()-1;i>=0;i--)
    {
        k=nhantung(a,b[i]);
        k.insert(k.size(),l-1-i,'0');
        s=tong(s,k);
    }
    return s;
}
string a[100];
void solve()
{
    a[0]="1",a[1]="1";
    for(int i=2;i<100;i++)
    {
        string s="";
        for(int j=0;j<i;j++)
        {
            s=tong(s,nhan(a[i],a[i-j]))
        }
        a[i]=s;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        cin>>a>>b;
        cout<<nhan(a,b);
        cout<<endl;
    }
}