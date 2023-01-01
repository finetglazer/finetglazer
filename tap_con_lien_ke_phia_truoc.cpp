#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int b[],int n)
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=b[i]) return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[1000];
        for(int i=1;i<=k;i++) cin>>a[i];
        bool d=true;
        int b[1000];
        for(int i=1;i<=k;i++) b[i]=i;
        int i=k-1;
        while(i>=1 && a[i+1]-a[i]==1)
        {
            i--;
        }
        if(i==0 && a[k]==k)
        {
            for(int j=1;j<=k;j++) cout<<(n-k+j)<<" ";
            cout<<endl;
        }
        else{
            i++;
            a[i]--;
            for(int j=i+1;j<=k;j++)
            {
                a[j]=n-k+j;
            }
            for(int j=1;j<=k;j++)
            {
                cout<<a[j]<<" ";
            }
            cout<<endl;
        }
        
        
    }
}