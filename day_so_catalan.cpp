#include<bits/stdc++.h>
using namespace std;
long long nCk(int k,int n)
{
    if(k==n || k==0) return 1;
    else return nCk(k-1,n-1)+nCk(k,n-1);
}
long long luythua(int a,int k)
{
    if(k==0) return 1;
    if(k%2==0) return luythua(a,k/2)*luythua(a,k/2);
    else return luythua(a,k/2)*luythua(a,k/2)*a;
}
long long pow(int a,int b,int c)
{
    if(b==0) return 1;
    else{
        if(b%2==0) return (pow(a,b/2,c)*pow(a,b/2,c))%c;
        else return (pow(a,b/2,c)*pow(a,b/2,c))
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a;
        int k;
        cin>>a>>k;
        cout<<luythua(a,k)<<endl;
    }
}