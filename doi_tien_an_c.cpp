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
        while(n>=1000)
        {
            n-=1000;
            cnt++;
        }
        while(n>=500)
        {
            n-=500;
            cnt++;
        }
        while(n>=200)
        {
            n-=200;
            cnt++;
        }
        while(n>=100)
        {
            n-=100;
            cnt++;
        }
        while(n>=50)
        {
            n-=50;
            cnt++;
        }
        while(n>=20)
        {
            n-=20;
            cnt++;
        }
        while(n>=10)
        {
            n-=10;
            cnt++;
        }
        while(n>=5)
        {
            n-=5;
            cnt++;
        }
        while(n>=2)
        {
            n-=2;
            cnt++;
        }
        while(n>=1)
        {
            n-=1;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}