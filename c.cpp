#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int a[n+5];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int i=n-1;
        while (i>=1 && a[i]>a[i+1])
        {
            i--;
            /* code */
        }
        if(i==0) 
        {
            for(int j=1;j<=n;j++) cout<<j<<" ";
        }
        else{
            int min=0;
            for(int j=i+1;j<=n;j++) 
            {
                if(a[j]>a[i]) 
                {
                    min=j;
                    break;
                }
            } 
            swap(a[i],a[min]);
            sort(a+i+1,a+n+1);
            for(int j=1;j<=n;j++) cout<<a[j]<<" ";
        }
        cout<<endl;
    }
}