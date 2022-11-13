#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int k;
        cin>>n>>k;
        int a[1000];
        memset(a,0,1000);
        for(int i=1;i<=k;i++) a[i]=i;
        for(int i=1;i<=k;i++) cout<<a[i];
        cout<<" ";
        bool d=true;
        while(d)
        {
            int i=k;
            while(i>=1 && a[i]==n-k+i)
            {
                i--;
            }
            if(i==0)
            {
                d=false;
            }
            else{
                a[i]++;
                for(int j=i+1;j<=k;j++)
                {
                    a[j]=a[j-1]+1;
                }
                for(int j=1;j<=k;j++) cout<<a[j];
                cout<<" ";
            }
        } 
        cout<<endl;
    }
}