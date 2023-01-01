#include<bits/stdc++.h>
using namespace std;
int a[1005],n;
bool d=true;
int x;
void cal(int pos,int sum)
{
    if(d==false) return;
    if(sum==x)
    {
        d=false;
        return;
    }
    for(int j=pos;j<=n;j++)
    {
        if(sum+a[j]<=x)
        {
            cal(j+1,sum+a[j]);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            x+=a[i];
        }
        if(x%2!=0)
        {
            cout<<"NO";
        }
        else
        {
            cal(1,0);
            if(d)
            {
                cout<<"NO";
            }
            else cout<<"YES";
        }
        cout<<endl;
    }

}