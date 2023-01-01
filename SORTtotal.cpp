#include<bits/stdc++.h>
using namespace std;
// noi bot ban tang dan
void bubble_Sort(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(a[i]<a[j]) swap(a[i],a[j]);
        }
    }
}
// 
void insertion_Sort(int a[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[index]) index=j;
        }
        swap(a[i],a[index]);
    }
}
void merge(int a[],int l,int r)
{
    if(l==r) return;
    int m=(l+r)/2;
    merge(a,l,m);// bai toan ket thuc khi con 1 phan tu
    merge(a,m+1,r);// bai toan dien ra khi minh chia mang lien tuc
    vector<int> x(a+l,a+m+1);
    vector<int> y(a+m+1,a+r+1);
    int i=0;
    int j=0;
    while(i<x.size() && j<y.size())
    {
        if(x[i]<=y[j]) 
        {
            a[l]=x[i];
            l++;i++;
        }
        else{
            a[l]=y[j];
            l++;j++;
        }
    }
    while(i<x.size())
    {
        a[l]=x[i];
        l++;i++;
    }
    while(j<y.size())
    {
        a[l]=y[j];
        l++;j++;
    }
    
}
void quick_Sort(int a[],int l,int r)
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
    if(l<i-1) quick_Sort(a,l,i-1);
    if(r>i+1) quick_Sort(a,i+1,r);
}
void quickSort(int a[],int l,int r)
{
    int pivot=(l+r)/2;
    int i=l;
    int j=r;
    while(i<=j)
    {
        while(a[i]<a[pivot])   i++;
        while(a[j]>a[pivot])    j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
        if(l<j) quickSort(a,l,j);
        if(i<r) quickSort(a,i,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
