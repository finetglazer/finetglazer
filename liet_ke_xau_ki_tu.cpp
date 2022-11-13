#include<bits/stdc++.h>
using namespace std;
char a[100];
int k,n;
char temp;
char c;
string s="";
void kt()
{
    for(int i=0;i<26;i++)
    {
        s+=(i+'A');
    }
    // cout<<s;
}
void in()
{

    for(int i=1;i<=n;i++)
    {
        cout<<a[i];
    } 
    cout<<endl;
}
void Try(int i)
{
    for(char j=temp;j<=c;j++)
    {
        a[i]=j;
        temp=a[i];
        if(i==n) in();
        else Try(i+1);

    }
}
int main()
{
    kt();
    temp='A';
    
    cin>>c>>n;
    Try(1);
}