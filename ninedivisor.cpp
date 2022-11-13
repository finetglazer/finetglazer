#include<bits/stdc++.h>
using namespace std;
int pr[40005];
void dreamer()
{
    for(int i=0;i<=40000;i++)
    {
        pr[i]=1;
    }
    pr[1]=0;pr[2]=1;
    for(int i=2;i<=sqrt(40000);i++)
    {
        for(int j=i*i;j<=40000;j+=i)
        {
            pr[j]=0;
        }
    }
    // for(int i=1;i<5;i++) cout<<pr[i]<<" ";
}
int main()
{
    dreamer();
    int n;cin>>n;
    // th m=2 n=2
    int cnt=0;
    for(int i=2;i<=40000;i++)
    {
        if(pr[i]==1)
            for(int j=i+1;j<=40000;j++)
            {
                long long check=i*j;
                if(pr[j]==1 && check<=sqrt(n))
                {
                    cnt++;
                }
                else if(pr[j]==1 && check >sqrt(n))
                    break;
            }
    }
    // int k=sqrt(sqrt(sqrt(n)));
    for(int i=2;i<=15;i++)
    {
        if(pr[i]==1 && pow(i,8)<=n) cnt++;      
    }
    cout<<cnt;
}