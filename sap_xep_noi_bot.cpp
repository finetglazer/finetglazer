#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)    cin>>a[i];
    int cnt=1;
    int tmp=0;
    while(cnt!=0)
    {
        bool d=true;
        tmp++;
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                d=false;
            } 
        }
        if(d) cnt=0;
        else
        {
            cout<<"Buoc "<<tmp<<": ";
            for(int k=0;k<n;k++) cout<<a[k]<<" ";
            cout<<endl;
        }
    } 
}