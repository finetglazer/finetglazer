#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int r)
{
    vector<int> x,y;
    for(int i=l;i<=m;i++) x.push_back(a[i]);
    for(int j=m+1;j<=r;j++) y.push_back(a[j]);
    int i=0;
    int j=0;
    while(i<x.size() && j<y.size())
    {
        if(x[i]<y[j]) 
        {
            a[l]=x[i];
            l++;
            i++;
        }
        else{
            a[l]=y[j];
            l++;
            j++;
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
void merge_sort(int a[],int l,int r)
{
    // merge khi n==1
    if(l==r) return;
    int mid=(l+r)/2;
    merge_sort(a,l,mid);
    merge_sort(a,mid+1,r);
    merge(a,l,mid,r);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        merge_sort(a,0,n-1);
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}