#include<bits/stdc++.h>
using namespace std;
// lotum
void quick_sort(int a[],int l,int r)
{
    int pivot=r;
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(a[j]<a[pivot]) 
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    i++;
    swap(a[i],a[pivot]);
    if(l<i-1) return quick_sort(a,l,i-1);
    if(i+1<r)return quick_sort(a,i+1,r);
}
void quicksort(int a[],int l,int r)
{
    int pivot=(l+r)/2;
    int i=l;
    int j=r;
    while(i<=j)
    {
        while(a[i]<a[pivot]) i++;
        while(a[j]>a[pivot]) j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;j--;
        }     
    }
    if(j>l) return quicksort(a,l,j);
    if(i<r) return quicksort(a,i,r); 
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}