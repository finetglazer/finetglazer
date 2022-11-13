#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int b[n+5];
        int j=n-1;
        for(int i=0;i<n;i+=2)
        {
            b[i]=a[j--];

        }
        j=0;
        for(int i=1;i<n;i+=2)
        {
            b[i]=a[j++];
        }
        for(int i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}