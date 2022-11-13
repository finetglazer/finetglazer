#include<bits/stdc++.h>
using namespace std;
string a,b;
string dif(string s1, string s2)
{
    //s1>s2
    int len1=s1.size();
    int len2=s2.size();
    int re[len1];
    int k1[len1];
    for(int i=0;i<len1;i++)
    {
        re[i]=0;
    }
    int k2[len1];
    for(int i=0;i<len1;i++)
        k1[i]=s1[i]-'0';
    int x=0;
    for(int j=0;j<len1;j++)
    {
       if(j<len1-len2) k2[j]=0;
       else
       {
           k2[j]=s2[x]-'0';
           x++;
       } 
    }
    // for(int j=0;j<len1;j++)
    //     cout<<k2[j];
    // cout<<endl;
    int d=0;
    int k=0;
    for(int i=len1-1;i>=0;i--)
    {
        int dif=k1[i]-k2[i]-d;
        re[k]+=(10+dif)%10;
        if(dif<0) d=1;
        else d=0;
        k++;
    }
    int i=k-1;
    string c = "";
     
    while (i >= 0)
        c += std::to_string(re[i--]);
 
    return c;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>a>>b;
        if(a.size()>b.size()) cout<<dif(a,b);
        else if(a.size()<b.size()) cout<<dif(b,a);
        else
        {
            if(a>b) dif(a,b);
            else dif(b,a);
        }
        cout<<endl;
    }
}