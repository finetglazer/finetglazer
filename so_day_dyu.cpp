#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        set<char> ss;
        bool d=true;
        for(int i=0;i<a.size();i++)
        {
            if(a[0]=='0') 
            {
                d=false;
                cout<<"INVALID";
                break;
            }
            if(a[i]>='0' && a[i]<='9')
            {
                ss.insert(a[i]);
            }
            else{
                d=false;
                cout<<"INVALID";
                break;
            }
        }
        if(d)
        {
           string x="0123456789";
            string y="";
            for(auto &k:ss)
            {
                y+=k;
            }
            if(y==x) cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }
}