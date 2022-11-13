#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        long long a[n+5];
        for(long long i=0;i<n;i++)
        {
           cin>>a[i];
           a[i]*=a[i]; 
        } 
        bool d=true,f=true;
        sort(a,a+n);
        // for(int i=0;i<n;i++) cout<<a[i]<<" ";
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                long long k=a[i]+a[j];
                if(binary_search(a+j+1,a+n,k)) 
                {
                    f=false;
                    d=false;
                    break;
                }
            }
            if(d==false) break;
        }
        if(f) cout<<"NO";
        else cout<<"YES";
        cout<<endl;


    }
}