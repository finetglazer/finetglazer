#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int xa=a-1;
        int xb=abs(c-b);
        xb+=(c-1);
        if(xa>xb) cout<<"2";
        else if(xa<xb) cout<<"1";
        else cout<<"3";
        cout<<endl;
    }
}