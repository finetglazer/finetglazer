#include<bits/stdc++.h>
using namespace std;
int toNum(string s)
{
    int res=0;
    for(int i=0;i<s.size();i++)
    {
        res*=10;
        res+=s[i]-'0';
    }
    return res;
}
int main()
{
    string a,b;
    cin>>a>>b;
    int min=0;
    int max=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='6') a[i]='5'; 
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]=='6') b[i]='5'; 
    }
    min=toNum(a)+toNum(b);
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='5') a[i]='6'; 
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]=='5') b[i]='6'; 
    }
    max=toNum(a)+toNum(b);
    cout<<min<<" "<<max;
}