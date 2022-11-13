#include<bits/stdc++.h>
using namespace std;
long long qtt(int n)
{
    long long sum=0;
    for(int i=1;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            sum+=i;
            sum+=(n/i);
        }
    }
    if(sqrt(n)*sqrt(n)==n) sum+=sqrt(n);
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int max=0;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<qtt(a[i])<<" ";
    }

}