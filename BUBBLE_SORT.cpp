#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int a[],int n)
{
    for(int j=n-1;j>=0;j--)
    {
        for(int i=0;i<j;i++)
        {
            if(a[i]>a[i+1]) swap(a[i],a[i+1]);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        bubbleSort(a,n);
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}