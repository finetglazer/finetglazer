#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int b[],int n)
{
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=b[i]) return false; 
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[1000];
        for(int i=1;i<=n;i++) cin>>a[i];
        int b[1000];
        for(int i=1;i<=n;i++) b[i]=i;
        int cnt=1;
        bool d=true;
        while(d)
        {
            int i=n-1;
            while(i>=1 && b[i+1]<b[i])  i--;
            if(i==0)
            {
                cout<<"1";
                d=false;
            } 
            else{
                int j=n;
                while(1)
                {
                    if(b[j]>b[i]) break;
                    j--;
                }
                swap(b[j],b[i]);
                sort(b+i+1,b+n+1);
                cnt++;
                if(check(a,b,n))
                {
                    cout<<cnt;
                    break;
                } 
            }
        }
        cout<<endl;
    }
}