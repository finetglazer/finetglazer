#include<iostream> 
using namespace std;
int n;
int co[15][15];
int a[15],cheo1[15],cheo2[15],cot[15];
void in()
{
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void Try(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(co[i][j]==0 && cheo1[i+j-1]==0 && cheo2[n-i+j]==0 && cot[j]==0)
        {
            a[i]=j;
            co[i][j]=1;
            cheo1[i+j-1]=1;
            cheo2[n-i+j]=1;
            cot[j]=1;
            if(i==n) in();
            else Try(i+1);
            a[i]=0;
            co[i][j]=0;
            cheo1[i+j-1]=0;
            cheo2[n-i+j]=0;
            cot[j]=0;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    Try(1);
}