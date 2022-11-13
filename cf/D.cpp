#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==2) 
        {
            cout<<"2 1"<<endl;
        }
        if(n==3 ) 
        {
            cout<<"-1"<<endl;
        }
        if(n>3)
        {
            int a[n+5];
            int j=1;
            for(int i=n;i>=n-1;i--)
            {
                a[j]=i;
                j++;
            }
            for(int i=1;i<=n-2;i++)
            {
                a[j]=i;
                j++;
            }
            for(int i=1;i<=n;i++)
            {
                cout<<a[i]<<" ";
            }
             cout<<endl;
        }
       

    }
}