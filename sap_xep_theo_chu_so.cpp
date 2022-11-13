#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    string k=to_string(a);
    string l=to_string(b);
    return k+l>l+k;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        int max=0;
        for(int i=0;i<n;i++)
        {
           cin>>a[i]; 
        } 
        sort(a,a+n,cmp);
        for(int i=0;i<n;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
}