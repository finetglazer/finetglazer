#include<bits/stdc++.h> 
using namespace std;
string tong(string a,string b)
{
    string s="";
    if(a.size()<b.size()) swap(a,b);
    for(int i=b.size();i<a.size();i++)
        b.insert(0,1,'0');
    int d=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        int k=a[i]+b[i]-'0'-'0'+d;
        d=k/10;
        k%=10;
        s.insert(0,1,k+'0');
    }
    return s;
}
string fib(int n)
{
    if(n==1||n==2) return "1";
    else{
        return fib(n-1)+fib(n-2);
    }
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