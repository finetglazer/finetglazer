#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[1000];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        if(n%2!=0)
        {
            for(int i=0;i<(n-1)/2;i++)
            {
                cout<<a[n-i-1]<<" "<<a[i]<<" ";
            }
            cout<<a[(n-1)/2];
        }
        else{
            for(int i=0;i<(n-1)/2;i++)
            {
                cout<<a[n-i-1]<<" "<<a[i]<<" ";
            }
            cout<<a[(n-1)/2+1]<<" "<<a[(n-1)/2];
        }
        
        cout<<endl;
    }
}