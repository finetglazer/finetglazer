#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(a[i]==1 && a[i+1]==1) return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[1000];
        memset(a,0,1000);
        a[1]=1;a[n]=0;
        for(int i=2;i<=n-1;i++)
        {
            a[i]=0;
        }
        for(int i=1;i<=n;i++) 
        {
            if(a[i]==0) cout<<"A";
            else cout<<"H";
        }
        cout<<endl;
        bool d=true;
        while(d)
        {
            int i=n-1;
            while(i>=2 && a[i]==1)  i--;
            if(i==1) d=false;
            else{
                a[i]=1;
                for(int j=i+1;j<=n-1;j++) a[j]=0;
                if(check(a,n))
                {
                    for(int k=1;k<=n;k++)
                    {
                        if(a[k]==0) cout<<"A";
                        else cout<<"H";
                    }
                    cout<<endl;
                }
            }
        }
    }
}