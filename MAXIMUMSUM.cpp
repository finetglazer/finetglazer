#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int a[m+n],b[n+m];
        long long suma=0,sumb=0;
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
            suma+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            sumb+=b[i];
        }
        int maxs;
        if(m>n)
        {
            for(int i=n;i<m;i++)
            {
                b[i]=0;
            }
            maxs=m;
        }
        else 
        {
            for(int i=m;i<n;i++)
            {
                a[i]=0;
            }
            maxs=n;
        }
        long long end=0;
        long long sum=0;
        for(int i=0;i<maxs;i++)
        {
            suma-=a[i];
            sum+=b[i];
            if(suma+sum>end) 
            {
                end = suma + sum;
            }
            
        }
        sum=0;
        for(int i = 0;i < maxs;i++)
        {
            sumb-=b[i];
            sum+=a[i];
            if(sum + sumb > end)
            {
                end = sum+ sumb;
            }

        }
        cout<<end<<endl;
    }
}