#include<bits/stdc++.h>
using namespace std;
int a[100005];
// void sol(int a[],int n)
// {
//     int lmin[100005];
//     int rmax[100005];
//     lmin[0]=a[0];
//     rmax[n-1]=a[n-1];
//     for(int i=1;i<n;i++)
//     {
//         lmin[i]=min(a[i],lmin[i-1]);
//     }
//     for(int i=n-2;i>=0;i--)
//     {
//         rmax[i]=max(a[i],rmax[i+1]);
//     }
//     for(int i=0;i<n;i++) cout<<lmin[i]<<" ";
//     cout<<endl;
//     for(int j=0;j<n;j++)    cout<<rmax[j]<<" ";
// }
void sole(int a[],int n)
{
    int min=INT_MAX;
    int i=0;
    int j=1;
    sort(a,a+n);
    while(i<n && j<n)
    {

        if(a[j]-a[i]>min && j>i)
        {
            i++;
        } 
        else if(a[j]-a[i]<=min && j>i)
        {
            min=a[j]-a[i];
            i++;
        }
        else if(j<=i) j++;
    }
    cout<<min<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        sole(a,n);
    }
}