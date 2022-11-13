#include<bits/stdc++.h>
using namespace std;
void heapify(int a[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(a[largest]<a[l] && l<n) largest=l;
    if(a[largest]<a[r] && r<n) largest=r;
    if(largest!=i)
    {
        swap(a[largest],a[i]);
        heapify(a,n,largest);
    }
}
void sort_Heap(int a[],int n)
{
    //buid heap
    for(int i=(n-1)/2;i>=0;i--)
    {
        heapify(a,n,i);
    }
    // sort
    for(int i=n-1;i>=0;i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort_Heap(a,n);
}