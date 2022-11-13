#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int cnt=1;
    for(int i=1;i<a.size();i++)
    {
        if(a[i-1]==a[i]) cnt++;
        else cnt=1;     
        if(cnt>=7) break;   
    }
    if(cnt>=7) cout<<"YES";
    else cout<<"NO";
}
