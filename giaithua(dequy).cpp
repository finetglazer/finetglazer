#include<bits/stdc++.h>
#define q 1000000007
using namespace std;
long long fib(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    long long fib0=0;
    long long fib1=1;
    long long fibn;
    n--;
    while(n--)
    {
        fibn=(fib0 +fib1)%q;
        fib0=fib1;
        fib1=fibn;
        
    }
    return fibn; 
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
}