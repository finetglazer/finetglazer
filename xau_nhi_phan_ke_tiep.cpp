#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a[1000];
        memset(a,0,1000);
        for(int i=0;i<s.size();i++)
        {
            a[i]=s[i]-'0';
        }
        int i=s.size()-1;
        while(i>=0 && a[i]==1)
        {
            i--;
        }
        if(i==-1) 
        {
            for(int i=0;i<s.size();i++) cout<<"0";
        }
        else{
            a[i]=1;
            for(int j=i+1;j<s.size();j++) a[j]=0;
            for(int j=0;j<s.size();j++) cout<<a[j];
        }
        cout<<endl;
    }
}