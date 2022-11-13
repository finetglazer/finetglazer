#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[100][100];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    int b[1000];
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        b[i]=i;
        sum+=a[i][b[i]];
    }
    int cnt=0;
    vector<int> vv;
    
    if(sum==k)
    {
        cnt++;
        for(int i=1;i<=n;i++)   vv.push_back(b[i]);          
        
    }
    sum=0;
    bool d=true;
    while(d)
    {
        int i=n-1;
        while(i>=1 && b[i+1] < b[i]) i--;
        if(i==0) d=false;
        else{
            int j=n;
            while(1)
            {
                if(b[j]>b[i]) break;
                j--;
            }
            swap(b[i],b[j]);
            sort(b+i+1,b+n+1);
            for(int l=1;l<=n;l++)
            {
                sum+=a[l][b[l]]; 
            } 
            if(sum==k)
            {
                cnt++;
                for(int l=1;l<=n;l++)   vv.push_back(b[l]);
            }
            sum=0;
            cout<<endl;
        }
    }
    cout<<cnt<<endl;
    for(int t=0;t<vv.size();t++) 
    {
        cout<<vv[t]<<" ";
        if((t+1)%n==0)
        {
            cout<<endl;
        }
    }
}