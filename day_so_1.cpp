#include<bits/stdc++.h>
using namespace std;
void Try(int a[], int n)
{
    if (n>0) {
        //cập nhật dãy mới và quay
        for (int i=0; i<n-1; i++)
            a[i]=a[i]+a[i+1];
        Try(a,n-1);
        for(int i=n-2;i>=0;i--) a[i]=a[i]-a[i+1];
        cout << "[";
        for (int i=0; i<n-1; i++)
            cout << a[i] << " ";
        cout << a[n-1] << "] " ;
    }
    else return;
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
        for(int i=0;i<n;i++) cin>>a[i];
        Try(a,n);
        cout<<endl;
    }
}