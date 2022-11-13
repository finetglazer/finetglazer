#include<bits/stdc++.h>
using namespace std;
int check(int a[1000],int l,int r)
{
    for(int i=l;i<r-1;i++)
    {
        if(a[i]>a[i+1]) 
        {
            for(int j=i;j<r-1;j++)
            {
                if(a[j]<a[j+1]) return 0;
            }
        }
        break;
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int l,r;
        cin>>l>>r;// l<r
        if(check(a,l,r)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}