#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        a[0]=INT_MAX;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        int b[n+5];
        int j=1;
        for(int i=1;i<=n;i+=2) b[i]=a[j++];
        for(int i=2;i<=n;i+=2) b[i]=a[j++];
        for(int i=1;i<j;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}
// phai theo tanwg dan theo vt chan le