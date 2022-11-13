#include<bits/stdc++.h>
using namespace std;
// int recur(int a)
// {
//     a--;
//     // bai toan a giam den khi =1 thi ket thuc
//     if(a==1) return a;
//     else recur(a);
// }
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);// 16, 
}
long long gt(int x)
{
    if(x==0) return 1;
    else return x*gt(x-1);
}
long long fib(int n)
{
    if(n==1 || n==2) return 1;
    return fib(n-1)+fib(n-2);
    // ket thuc khi fibn
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;cin>>x;
        cout<<fib(x)<<endl;
    }

}