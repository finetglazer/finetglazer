#include<bits/stdc++.h>
#define ll long long
using namespace std;
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
    int i=s1+s2-1;
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

void cal(string s1,string s2)
{
    // chuyen thap phan
    long long x1,x2;
    x1=0;x2=0;
    ll tmp=0;
    for(ll i=s1.size()-1;i>=0;i--,tmp++)
    {
        if(s1[i]=='1')
        {
            x1+=pow(2,tmp);
        }
    }
    tmp=0;
    for(ll i=s2.size()-1;i>=0;i--,tmp++)
    {
        if(s2[i]=='1')
        {
            x2+=pow(2,tmp);
        }
    }
    // cout<<x1<<" "<<x2;
    string a1=to_string(x1);
    string a2=to_string(x2);
    string ans=mul(a1,a2);
    cout<<ans;
    cout<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        cal(s1,s2);
    }
}