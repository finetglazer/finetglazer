 #include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<i;j++)
        {
            
            if(a[j]>a[i]) swap(a[i],a[j]);
            
        }
        cout<<"Buoc "<<i<<": ";
        for(int k=0;k<=i;k++) cout<<a[k]<<" ";
        cout<<endl;
    }
}