#include<bits/stdc++.h>
using namespace std;
string hieu(string a,string b)
{
    string s="";
    if(a.size()>b.size()) b.insert(0,a.size()-b.size(),'0');
    else if(b.size()>a.size()) a.insert(0,b.size()-a.size(),'0');
    if(b>a)
    {
        string tmp=b;
        b=a;
        a=tmp;
    }
    int nho=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        int hieu=(a[i]-'0')-(b[i]-'0')+nho;
        nho=0;
        if(hieu<0) nho=-1;
        s.insert(0,1,(hieu+10)%10+'0');
    }
    return s;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        cout<<hieu(a,b);
        cout<<endl;
    }
}