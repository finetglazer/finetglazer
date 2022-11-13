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
        string a="";
        string b="";
        char s;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            if(s=='R') a+="1";
            else a+="0";
        }
        for(int i=0;i<n;i++)
        {
            cin>>s;
            if(s=='R') b+="1";
            else b+="0";
        }
        // cout<<a<<" "<<b<<endl;
        if(a==b) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}