#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll const mod=1e9+7;
vector<string> vv;
ll n;
string mul(string a,string b)
{
    ll s1=a.size();
    ll s2=b.size();
    if(s1==0|| s2==0) return "0";
    ll re[s1+s2];
    for(ll i=0;i<s1+s2;i++) re[i]=0;
    ll i_1=0;
    for(ll i=s1-1;i>=0;i--)
    {
        //i1 lay so 
        ll i_2=0;
        ll i1=a[i]-'0';
        ll d=0;
        for(ll j=s2-1;j>=0;j--)
        {
            ll i2=b[j]-'0';
            ll sum= i1*i2+d+re[i_1+i_2];
            d=sum/10;
            re[i_1+i_2]=sum%10;
            i_2++;
        }
        if(d>0) re[i_1+i_2]+=d;
        i_1++;
    }
    // loai bo thang 0 be =n phai vd 0123 thanh 123 kq la 321
    ll i=s1+s2-1;
    while(re[i]==0 && i>=0)
    {
        i--;
    }
    // if one of a,b=0 i==-1 cout<<0;
    if(i==-1)
    {
        return "0";
    }
    string c = "";
     
    while (i >= 0)
        c += std::to_string(re[i--]);
 
    return c;
}

string tong(string a,string b)
{
    if(b.size()>a.size())
    {
        for(ll j=a.size();j<b.size();j++)
        {
            a="0"+a;
        }
    }
    else{
        for(ll j=b.size();j<a.size();j++)
        {
            b="0"+b;
        }
    }
    ll nho=0;
    ll tong=0;
    string tmp;
    string ans="";
    for(ll i=a.size()-1;i>=0;i--)
    {
        tong=nho+(a[i]-'0')+(b[i]-'0');
        nho=tong/10;
        tmp=to_string(tong%10);
        ans=tmp+ans;
    }
    if(nho>0) ans="1"+ans;
    return ans;
}
void ktao()
{
    vv.push_back("1");
    
    for (ll j = 1; j < 105; j++)
    {
        string tmp="";
         for (ll i = 0; i <= j-1; i++)
        {
            tmp=tong(tmp,(mul(vv[i],vv[j-i-1])));
        }
        vv.push_back(tmp);
    }
       
}

int main()
{
    int t;
    cin>>t;
    ktao();
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<vv[n];
        cout<<endl;
    }
}