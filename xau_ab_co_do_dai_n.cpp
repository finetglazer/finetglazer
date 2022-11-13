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
        for(int i=1;i<=n;i++)
        {
            a+='A';
        }
        cout<<a<<" ";
        bool d=true;
        while(d)
        {
            int i=n-1;
            while(i>=0 && a[i]=='B')
            {
                i--;
            }
            if(i==-1) d=false;
            else{
                a[i]='B';
                for(int j=i+1;j<n;j++) a[j]='A';
                cout<<a<<" ";
            }
        }
        cout<<endl;
    }
    
}