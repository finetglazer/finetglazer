#include<bits/stdc++.h>
using namespace std;
string mul(string a,string b)
{
    int s1=a.size();
    int s2=b.size();
    if(s1==0|| s2==0) return "0";
    int re[s1+s2];
    for(int i=0;i<s1+s2;i++) re[i]=0;
    int i_1=0;
    for(int i=s1-1;i>=0;i--)
    {
        //i1 lay so 
        int i_2=0;
        int i1=a[i]-'0';
        int d=0;
        for(int j=s2-1;j>=0;j--)
        {
            int i2=b[j]-'0';
            int sum= i1*i2+d+re[i_1+i_2];
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

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        cout<<mul(a,b)<<endl;
    }
}