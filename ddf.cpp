#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int k=a.size();
    if((a[k-1]=='Y' || a[k-1]=='y' )&& (a[k-2]=='p'||a[k-2]=='P') )
    cout<<"yes";
    else cout<<"no";
}
