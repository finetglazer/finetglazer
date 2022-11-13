#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        bool d=true;
        int a[100];
        for(int i=1;i<=k;i++) 
        {
            a[i]=i;
            cout<<a[i];
        }
        cout<<" ";
        while(d)
        {
            int i=k;
            while(i>=1 && a[i]==n-k+i)
            {
                i--;
            }
            if(i==0) d=false;
            else
            {
                a[i]++;
                for(int j=i+1;j<=k;j++)
                {
                    a[j]=a[j-1]+1;
                }
            }
            if(d) 
            {
                for(int i=1;i<=k;i++) cout<<a[i];
                cout<<" ";
            }
        }
        cout<<endl;
        // n-k+1
        /* code */
    }
    
}