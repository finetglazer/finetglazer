#include<bits/stdc++.h>
using namespace std;
string a,b;
void dif(string s1, string s2)
{
    //s1>s2
    int len1=s1.size();
    int len2=s2.size();
    vector<int> re(len1,0);
    int k1[len1],k2[len1];
    for(int i=0;i<len1;i++)
        k1[i]=s1[i]-'0';
    for(int j=0;j<len1;j++)
    {
        if(j<len2) k2[i]=s2[i]-'0';
        if(j>=len2) k2[i]=0;
    }
    int d=0;
    int dif=0;
    for(int i=len1-1;i>=0;i--)
    {
        dif=k1[i]-k2[i]-d;
        re[i]=(10+dif)%10;
        if(dif<0) d=1;
    }
    int i=re.size()-1;
    while(re[i]==0 && i>=0) i--;
    for(int j=i;j>=0;j--)
    {
        cout<<re[j];
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a.size()>b.size()) dif(a,b);
        else dif(b,a);
    }
}