#include<bits/stdc++.h>
using namespace std;
int pr[40000];
void dreamer()
{
    for(int i=0;i<40000;i++) pr[i]=1;
    pr[0]=0;pr[1]=0;pr[2]=1;
    for(int i=2;i<40000;i++)
    {
        for(int j=i*i;j<40000;j+=i)
        {
            pr[j]=0;
        }
    }
}
int disgcd(int x)
{
    if(x%2==0) return 2;
    else if(pr[x]==1) return x;
    else 
    {
        for(int i=3;i<=sqrt(x);i++)
        {
            if(x%i==0) return i;
        }
        return 1;
    }
}
int main()
{
    dreamer();
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cout<<disgcd(i)<<" ";
        }
        cout<<endl;
    }
}