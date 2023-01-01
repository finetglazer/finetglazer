#include<bits/stdc++.h>
using namespace std;
int b[35];
int a[7];
int n,k;
void Try(int i)
{
    for(int j=b[i-1]+1;j<=n-k+i;j++)
    {
        b[i]=j;
        if(i==k) 
        {
             for(int l=1;l<=k;l++)
            {
                cout<<b[l];
            } 
            cout<<endl;
        }

        else Try(i+1);
    }
}
int main()
{
    cin>>k>>n;
    Try(1);
}