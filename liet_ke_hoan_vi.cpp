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
        int a[100];
        for(int i=1;i<=n;i++)
        {
            a[i]=i;
            cout<<a[i];
        }
        cout<<" ";
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
                int min=n;
               while(a[min]<a[i]) min--;
                swap(a[i],a[min]);
                reverse(a+i+1,a+n+1);// mang co index gtri tu 0 den n+1
            }
            if(d) 
            {
                for(int i=1;i<=n;i++) cout<<a[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}