#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;int k;cin>>k;
        int a[n];
        int d=0;
        for(int i=0;i<n;i++)
        {
           cin>>a[i]; 
           if(a[i]<=k) d++;
        } 
        int cnt=0;
        for(int i=0;i<d;i++)
        {
            if(a[i]<=k) cnt++;
        }
        int max=cnt;
        for(int i=d;i<n;i++)
        {
            if(a[i-d]<=k) cnt--;
            if(a[i]<=k) cnt++; 
            if(cnt>max) max=cnt;
        }
        cout<<d-max;
        cout<<endl;
        
        /* code */
    }
    
}