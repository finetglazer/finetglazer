#include<bits/stdc++.h>
using namespace std;
bool checkbi(int a[],int n)
{
    for(int i=n-1;i>=1;i--)
    {
        if(a[i]==1 && a[i+1]==1) return true;
    }
    return false;
}
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
        for(int i=n-k+1;i<=n;i++)
        {
            a[i]=1;
        }
        for(int i=1;i<=n;i++) cout<<a[i];
        cout<<endl;
        bool d=true;
        while(d)
        {
            int i=n-1;
            while(i>=1 && a[i]>=a[i+1]) i--;
            if(i==0) d=false;
            else{
                int j=n;
                while(1)
                {
                    if(a[j]>a[i]) break;
                    j--;
                }
                swap(a[i],a[j]);
                sort(a+i+1,a+n+1);
                for(int k=1;k<=n;k++) cout<<a[k];
                cout<<endl;
            }
            
            
        }
        
    }
}