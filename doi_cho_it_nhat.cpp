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
        int cnt=0;
        int a[1000];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++)
        {
            int idx=0;
            int min=a[i];
            for(int j=i+1;j<n;j++)
            {
                if(a[j]<min)
                {
                    min=a[j];
                    idx=j;
                } 
            }
            if(a[i]!= min)
            {
                swap(a[idx],a[i]);
                cnt++;
            }      
        }
        cout<<cnt<<endl;
    }
}