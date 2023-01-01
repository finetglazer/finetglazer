#include<bits/stdc++.h>
using namespace std;
// void sole(int a[],int n)
// {
//     sort(a,a+n);
//     int max=INT_MIN;
//     int l,r;
//     for(int i=0;i<n-1;i++)
//     {
//         l=i+1;
//         r=n-1;
//         while(l<r)
//         {
//             if(a[l]*a[r]*a[i]>max) max=a[l]*a[r]*a[i];
//         }
//     }
// }
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    int cntduong=0;
    int cntam=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
       if(a[i]>0) cntduong++;
       else if(a[i]<0) cntam++;
       else cnt++;
    } 
    for(int i=0;i<)
    sort(a,a+n);
    if(cntduong>=3)
    {
        max=a[n-1]*a[n-2]*a[n-3];
    }
    if(cntduong==2 && cnt>0) max=0;
    if(cntduong ==2 && cnt ==0 && )
    cout<<max;
}