#include<bits/stdc++.h>
using namespace std;
int check(int a,int b)
{
    int r=1;
    int k=1;
    if(b+a>10) r=0;
    if(b*a>10) k=0;
    return r&&k;
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(check(a,b)) cout<<"y";
    else cout<<"n";
}