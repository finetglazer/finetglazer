#include<bits/stdc++.h>
using namespace std;
void selectionSort(int a[],int n)
{
    int min_index;
    for(int i=0;i<n;i++)
    {
        a[min_index]=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[min_index]>a[j]) min_index=j;
        }
        swap(a[min_index],a[i]);
    }n
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        selectionSort(a,n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}