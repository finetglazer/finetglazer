#include<bits/stdc++.h>
using namespace std;
int check(long long a)
{
    long long x=sqrt(a);
    if(x*x==a && pr[x]==1) return 1;
    else return 0;
}
//a x = ^m*^n (m+1)*(n+1)==3 m/n=2
int main()
{
    int pr[40000];
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;   
        for(long long i=0;i<n;i++) pr[i]=1;
        pr[0]=0;pr[1]=0;pr[2]=1;
        for(long long i=2;i<n;i++)
        {
            for(long long j=i*i;j<40000;j+=i)
            {
                pr[j]=0;
            }
        }
    
        int cnt=0;
        for(int i=2;i<=sqrt(n);i++)
        {
          
            if(pr[i]) cnt++;
        }
        cout<<cnt;
        cout<<endl;
    }
}