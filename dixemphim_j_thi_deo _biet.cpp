#include<bits/stdc++.h>
using namespace std;
// basic way
// int main()
// {
//     int c,n;
//     cin>>c>>n;
//     int a[n];
//     int sum=0;
//     for(int i=0;i<n;i++)
//     {
//        cin>>a[i];
//        sum+=a[i]; 
//     } 
//     sort(a,a+n);
//     if(sum<c) cout<<sum;
//     else{
//         int x=sum-c;
//         int i=0;
//         while(a[i]<x) i++;
//         sum-=a[i];
//         cout<<sum;
//     }
// }
// professional way
int main()
{
    int c,n;
    cin>>c>>n;
    int a[n+5];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }   
    int b[n+5];
    for(int i=1;i<=n;i++) b[i]=0;
    bool d=true;
    int min=c;
    int cc=0;
    while(d)
    {
        int i=n;
        while(i>=1 && b[i]!=0)
        {
            i--;
        }
        int end=0;
        if(i==0) d=false;
        else{
            b[i]=a[i];
            for(int j=i+1;j<=n;j++) b[j]=0;
            for(int k=1;k<=n;k++) end+=b[k];
            // cout<<end<<" ";// 001  010
            if(end < c && (c-end)< min)
            {
                min=(c-end);
                cc=end;
            } 
        }
    }
    cout<<cc;
} 