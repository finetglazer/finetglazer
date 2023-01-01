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
        int min2;
        int max1;
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        max1=a[1];
        for(int i=2;i<=n;i++)
        {
            if(min2>a[i]) min2=a[i];
        }
        if(min2>max1) cnt++;
        // cout<<max1<<" "<<min2<<endl;
        for(int i=2;i<n;i++)
        {
            if(max1<a[i]) max1=a[i];
            if(min2==a[i]) min2
        }
    }
}