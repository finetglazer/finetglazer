#include<bits/stdc++.h>
using namespace std;
// int pr[100000];
// void dreamer()
// {
//     for(int i=0;i<100000;i++) pr[i]=1;
//     pr[0]=0;pr[1]=0;pr[2]=1;
//     for(int i=2;i<100000;i++)
//     {
//         for(int j=i*i;j<100000;j+=i)
//         {
//             pr[j]=0;
//         }
//     }
// }
int checknt(int a)
{
    if(a==0||a==1) return 0;
    if(a==2) return 1;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0) return 0;
    }
    return 1;
}
int gcd(int a,int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}
int main()
{
    // dreamer();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        for(int i=1;i<n;i++)
        {
            if(gcd(i,n)==1) cnt++;
        }
        if(checknt(cnt)==1) cout<<"1";
        else cout<<"0";
        cout<<endl;
    }
}
