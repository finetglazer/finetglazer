#include<bits/stdc++.h>
using namespace std;
string s;
vector<char> ans(15);
int check[100];
void kt()
{
    for(int i=0;i<100;i++) check[i]=1;
}
void in()
{
    for(int i=1;i<=s.size();i++) cout<<ans[i];
    cout<<" ";
}
void Try(int i)
{
    for(int j=0;j<s.size();j++)
    {
        if(check[j])
        {
            ans[i]=s[j];
            check[j]=0;
            if(i==s.size())
            {
                in();
            } 
            else Try(i+1);
            check[j]=1;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        kt();    
        cin>>s;
        Try(1);
        cout<<endl;
    }
}