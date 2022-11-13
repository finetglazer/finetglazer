#include<iostream>
using namespace std;
// long long fib(int n)
// {
//     if(n<=1) return 1;
//     if(n>1)
//     {
//         return fib(n-2)+fib(n-1);
//     }
// }
const int n=80;
void fibo(long long a)
{
    long long f[101];f[0]=0;f[1]=1;

    for(int i=0;i<=n;i++)
    {
        if(i<2 && f[i]<=a) cout<<f[i]<<" ";
        if(i>=2 && f[i]<=a){
            f[i]=f[i-1]+f[i-2];
            cout<<f[i]<<" ";
        }
        if(f[i]>a) break;
        
         
    }
   

}
// long long gcd(long long a,long long b)
// {
//     if(b==0) return 0;
//     else return gcd(b,a%b)
// }
// bool test(ll x)
// {
//     ll s = sqrt(x);
//     return (s*s == x);
// }
// bool checkf(long long n)
// {
//     return test(5*n*n -4) || test(5*n*n + 4);
// }
// if 5n^2 -4 5n^2 +4 laf so chinh phuong khi n la so chinh phuong
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a;
        cin>>a;
        fibo(a);
        cout<<endl;
        
    }
    
}