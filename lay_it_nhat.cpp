#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)    cin>>a[i];
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(min>a[i]) min=a[i];
    }
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        int k=a[i]-min;
        sum+=k;
    }
    cout<<sum;
}