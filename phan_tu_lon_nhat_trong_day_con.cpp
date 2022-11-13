#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-k+1;i++)
        {
            int max=a[i];
            for(int j=i+1;j<i+k;j++)
            {
                if(a[j]>max) max=a[j];
            }
            cout<<max<<" ";
        }
        cout<<endl;
    }
}