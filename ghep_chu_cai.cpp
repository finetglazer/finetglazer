#include<bits/stdc++.h>
using namespace std;
char n;
string s;
string x;
int a[10];
int tmp=1,k;
bool check[10];
bool cam()
{
    for(int i=2;i<=k-1;i++)
    {
       if(s[a[i]]=='1' && s[a[i-1]]=='0' && s[a[i+1]]=='0' ) return false;
    }
    return true;
}
void in()
{
   char l;
    for(int i=1;i<=k;i++)
    {
        l='A'-1;
        l+=a[i];
        cout<<l;
    } 
    cout<<endl;
}
void Try(int i)
{
    for(int j=1;j<=k;j++)
    {
        if(check[j]==0)
        {
            a[i]=j;
            check[j]=1;
            if(i==k)
            {
                if(cam())  in();
             
            }
            else Try(i+1);
            check[j]=0;
        }
    }
}
int main()
{
    x="ABCDEFGH";
    s="010001000";
    cin>>n;
    
    for(int i=0;i<x.size();i++)
    {
        if(n==x[i])
        {
            k=i+1;
            break;
        }
    }
    Try(1);
}