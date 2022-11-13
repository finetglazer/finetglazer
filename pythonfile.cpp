#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    // bai nay thuc ra chi la kiem tra 3 ki tu cuoi co phair la .py
    int k=a.size();
    if((a[k-1]=='Y' || a[k-1]=='y' ) && (a[k-2]=='P' || a[k-2] =='p' ) && a[k-3]=='.') cout<<"yes";
    else cout<<"no";
}