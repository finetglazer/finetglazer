#include<bits/stdc++.h>
using namespace std;
int merge(int a[],int l,int m,int r)
{
    int k=0;
    vector<int> x(a+l,a+m+1);
    vector<int> y(a+m+1,a+r+1);
    int i=0;
    int j=0;
    while(i<x.size()&&j<y.size())
    {
        if(x[i]<=y[j])
        {
            a[l]=x[i];
            l++;i++;
        }
        else{
            a[l]=y[j];
            l++;j++;k++;
        }
        /* code */
    }
    while(i<x.size())
    {
        a[l]=x[i];
        l++;i++;k++;
    }
    while(j<y.size())
    {
        a[l]=y[j];
        l++;j++;
    }
    return k;
}
void merge_Sort(int a[],int l,int r)
{
    // end : l=r
    // start l<r
    // continue m = L +r /2 
    if(l==r) return;
    int m=(l+r)/2;
    merge_Sort(a,l,m);
    merge_Sort(a,m+1,r); 
    merge(a,l,m,r);
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        merge_Sort(a,0,n-1);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        /* code */
    }
    
}