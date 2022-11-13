#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[1000];   
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl; 
    bool d=true;
    while(d)
    {
        int i = n-1;
        while(i>=1 && a[i+1]<a[i])
        {
            i--;
        }
        if(i==0) d=false;
        else{
            int j=n;
            while(1)
            {
                if(a[j]>a[i]) 
                {
                    break;   
                }
                j--;
            }
            swap(a[j],a[i]);
            sort(a+i+1,a+n+1);
            for(int k=1;k<=n;k++) cout<<a[k]<<" ";
            cout<<endl;
        }
    }
}