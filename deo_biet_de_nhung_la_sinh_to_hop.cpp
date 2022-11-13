#include<bits/stdc++.h>
using namespace std;
// int n,m,a[100],b[100]={0};
void solve(int a[],int b[],int n,int m)
{
    bool d=true;
    int min=100000;
    int tmp=0;
    int x=0;
    for(int i=1;i<=3;i++)
    {
        b[i]=a[i];
        tmp+=b[i];
    } 
    if(tmp<=m && min>(m-tmp))
    {
        min=m-tmp;
        x=tmp;
    }  
    // for(int i=1;i<=3;i++) cout<<b[i]<<" "<<a[i]<<endl;   
    while(d) 
    {
        int i=3;
        int sum=0;
        while(i>=1 && b[i]==a[n-3+i]) i--;
        // cout<<i<<endl;
        if(i==0) d=false;
        else{
            int k=1;
            while(a[k]<=b[i]) k++;
            b[i]=a[k];
            k++;
            for(int j=i+1;j<=3;j++) b[j]=a[k++];
            // for(int j=1;j<=3;j++) cout<<b[j]<<" ";
            for(int j=1;j<=3;j++) sum+=b[j];
            if(sum<=m && min>(m-sum)) 
            {
                x=sum;
                min=(m-sum);
                // cout<<min<<" ";
            }
            
        }
        // for(int j=1;j<=3;j++) cout<<b[j]<<" ";
    }
    cout<<x;
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        int b[n];
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        // for(int i=1;i<=n;i++) cout<<a[i]<<" ";
        solve(a,b,n,m);
    }
}