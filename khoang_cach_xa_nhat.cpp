#include<bits/stdc++.h>
using namespace std;
int lmin[100005],rmax[100005];
void find(int a[],int n)
{
    //lmin
    lmin[0]=a[0];
    rmax[n-1]=a[n-1];
    for(int i=1;i<n;i++)    lmin[i]=min(a[i],lmin[i-1]);// chay trai sang
    for(int j=n-2;j>=0;j--) rmax[j]= max(rmax[j+1],a[j]);// chay tu phai sang

    int maxdif=-1;
    // for(int i=0;i<n;i++) cout<<lmin[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<n;i++) cout<<rmax[i]<<" ";
    int i=0;
    int j=0;
    while(j<n && i<n)
    {
        if(lmin[i]<rmax[j])
        {
            maxdif=max(maxdif,j-i);
            j++;
        }
        else i++;
    }
    cout<<maxdif;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        find(a,n);
        cout<<endl;
    }
}