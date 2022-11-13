#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a1[n+1],a2[n+1];
        int s1=0,s2=0;
        a1[0]=0,a2[0]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a1[i];
            a1[i]+=a1[i-1];
        }
        for(int i=1;i<=n;i++)
        {
            cin>>a2[i];
            a2[i]+=a2[i-1];
        }
        int maxx=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+maxx;j<=n;j++)
            {
                if(a1[j]-a1[i-1]==a2[j]-a2[i-1])
                {
                    if(maxx<j-i+1) maxx=j-i+1;
                }
            }
        }
        cout<<maxx;
        cout<<endl; 
            
        
    }
}