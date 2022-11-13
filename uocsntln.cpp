#include<bits/stdc++.h>
using namespace std;
int notpr[100000]={};

int check(int x)
{
    int max=0;
    for(int i=1;i<=sqrt(x);i++)
    {
        if(x%i==0 && notpr[i]==0 && max<i)
        {
            max=i;
            
        }  
        if(notpr[x/i]==0)
        {
            if(max<x/i) max=x/i;
        } 
    }
    return max;
}
int main()
{
    int N=1e5 +5;
    int sqr=sqrt(N);
    notpr[0]=1;notpr[1]=1;notpr[2]=0;
    for(int i=2;i<sqr;i++) 
    {
        if(notpr[i]==0)
        {
            for(int j=i*i;j<N;j+=i)
            {
                notpr[j]=1;
            }
        }
    }
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
    {
         cout<<check(a[i])<<" ";
    }
}