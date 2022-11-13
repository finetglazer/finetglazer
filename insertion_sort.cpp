#include<bits/stdc++.h>
using namespace std;
void insertion_Sort(int a[],int n)
{
    
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>=1 && a[j-1]>a[j])
        {
            swap(a[j-1],a[j]);
            j--;
        }
        for(int k=0;k<n;k++)    cout<<a[k]<<" ";
        cout<<endl;
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
        insertion_Sort(a,n);
        cout<<endl;
    }
}