#include<bits/stdc++.h>
using namespace std;
void nguoc(int n)
{
    if(n!=0) 
    {
        cout<<n%10;
    }
    else return;
    nguoc(n/10);
}
// int maxd(int n)
// {
//     // n==0 
//     // return (n/10)
//     if(n!=0)
//     {

//     } 
//     else{
//         return maxd(n/10);
//     }
// }
// int log(int n)
// {
//     if(n<=0) return -1;
//     else
//     {
//         if(n==1) return 0;
//         else
//         {
//             if(n==2) return 1;
//             else
//             {
//                 return 1+log(n/2);
//             }
//         }
//     }
// }
// long long giai(int n)
// {
//     if(n==0) return 1;
//     else
//     {
//         return (2*n+1)*giai(n-1);
//     }
// }
// long long tong(int n)
// {
//     if(n==0) return 1;
//     else return (2*n + 1 ) + tong(n-1);
// }
// long long ao(int n)
// {
//     if(n==1) return 1;
//     if(n%2==0) return ao(n-1)-n;
//     else return ao(n-1)+n;
// }
// long long gt(int n)
// {
//     if(n==1) return 1;
//     else return n*gt(n-1);
// }
// long long sgt(int n)
// {
//     if(n==1) return 1;
//     else return gt(n)+sgt(n-1);
// }
// long long pow(int n)
// {
//     return n*n;
// }
// long long gay(int n)
// {
//     if(n==1) return 1;
//     else return pow(n)+gay(n-1);
// }
// long long mu(int x,int y)
// {
//     if(y==0) return 1;
//     else
//     {
//         if(y%2==0) return mu(x,y/2)*mu(x/2);
//         else return x*mu(x,y/2)*(x,y/2);
//     }
// }
// double sum(double n)
// {
//     if(n==1) return 1;
//     else return 1/n + sum(n-1);
// }
// long long giaithua(int n)
// {
//     if(n==0) return 1;
//     else return pow(2,n) * giaithua(n-1);
// }
// double ngu(int n)
// {
//     if(n==0) return 1;
//     else return (double)1/(double)giaithua(n) + ngu(n-1);
//
int gcd(int a,int b)
{
    if(a==b) return a;
    else if(a>b)
    {
        return gcd(a-b,b);
    }
    else return gcd(a,b-a);
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<gcd(x,y);
}