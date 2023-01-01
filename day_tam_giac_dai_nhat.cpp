#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int de[n+5],in[n+5];
        in[0]=de[n-1]=1;
        for(int i=1;i<n;i++)
        {
            if(a[i-1]<a[i]) in[i]=in[i-1]+1;
            else in[i]=1;
        }
        for(int j=n-2;j>=0;j--)
        {
            if(a[j]>a[j+1]) de[j]=de[j+1]+1;
            else de[j]=1;
        }
        int dp[n+5];
        for(int i=0;i<n;i++)
        {
            dp[i]=de[i]+in[i]-1;
        }
        cout<<*max_element(dp,dp+n);
        cout<<endl;
    }
}