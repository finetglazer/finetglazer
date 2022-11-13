#include<bits/stdc++.h>
using namespace std;
void sinh_nhi_phan(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]=0;
        cout<<a[i];
    }
    cout<<endl;
    bool d=true;
    while(d)
    {
        int i=n-1;
        while(i>=0 && a[i]==1)
        {
            i--;
        }
        if(i==-1) d=false;
        else{
            a[i]=1;
            for(int j=i+1;j<n;j++) a[j]=0;
        }
        if(d) 
        {
            for(int k=0;k<n;k++) cout<<a[k];
            cout<<endl;
        }
    }
}
int main()
{
    int n;cin>>n;
    int a[1000];
    sinh_nhi_phan(a,n);
}