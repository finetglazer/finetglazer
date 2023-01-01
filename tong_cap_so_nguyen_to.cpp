#include<bits/stdc++.h>
using namespace std;
int notpr[1000001];
int main()
{
    int t;
    cin>>t;
    int N=1e6 + 5;
    int sqr=sqrt(N);
    notpr[0]=1;
    notpr[1]=1;
    notpr[2]=0;
    for(int i=2;i<=sqr;i++)
    {
        for(int j=i*i;j<1e6;j+=i)
        {
            notpr[j]=1;
        }
    }
    while(t--)
    {
        int n;
        cin>>n;
        bool d=true;
        // for(int i=0;i<30;i++) if(pr[i]) cout<<i<<" ";
        for(int i=0;i<n;i++)
        {
            if(notpr[i]==0 && notpr[n-i]==0) 
            {
                d=false;
                cout<<i<<" "<<n-i<<endl;
                break;
            }
        }
        if(d) cout<<"-1"<<endl;
    }
}