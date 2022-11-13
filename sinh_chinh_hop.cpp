// Thuật toán sinh chỉnh hợp : tương tự sinh tổ hợp,nhưng sau mỗi cấu hình tìm được ta 
// sinh hoán vị của cấu hình đó.
#include<bits/stdc++.h>
using namespace std;
void sinh_hoan_vi(int a[],int n)
{
    bool d=true;
    while(d)
    {
        int i=n-1;
        while(i>=1 && a[i+1]<a[i])
        {
            i--;
        }
        if(i==0) d=false;
        else{
            int k=n;
            while(a[k]<a[i]) k--;
            swap(a[i],a[k]);
            sort(a+i+1,a+n+1);
        }
        if(d) 
        {
            for(int l=1;l<=n;l++) 
            {
                cout<<a[l];
            }
            cout<<" ";
        }
    }
}
// sinh to hop
void sinh_chinh_hop(int a[],int n,int k)
{
    for(int i=1;i<=k;i++) 
    {
        a[i]=i;
        cout<<a[i];
    }
    cout<<" ";
    int b[1000];
    for(int i=1;i<=k;i++) b[i]=a[i];
    sinh_hoan_vi(b,k);
    bool d=true;
    while(d)
    {
        int i=k;
        while(i>=1 && a[i]==(n-k+i))
        {
            i--;
        }
        if(i==0) d=false;
        else{
            a[i]++;
            for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;

        }
        if(d) 
        {
            for(int l=1;l<=k;l++) cout<<a[l];
            cout<<" ";
            for(int l=1;l<=k;l++) b[l]=a[l];
            sinh_hoan_vi(b,k);
        } 
    }

}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[1000];
    sinh_to_hop(a,n,k);
}