#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<char> vv;
        char x='A';
        // char y=x+1;
        // cout<<y;
        for(int i=1;i<=n;i++) 
        {
            vv.push_back(x);
            x++;
        }
        // for(int i=0;i<n;i++) cout<<vv[i];
        vector<char> v;
        for(int i=0;i<k;i++) v.push_back(vv[i]);
        for(int i=0;i<k;i++) cout<<v[i];
        cout<<endl;
        bool d=true;
        while(d)
        {
            int i=k-1;
            while(i>=0 && vv[n-k+i]==v[i]) i--;
            if(i==-1) d=false;
            else{
                int e=0;
                for(int j=0;j<n;j++) 
                {
                    if(v[i]==vv[j]) 
                    {
                        e=j+1;
                        break;
                    }
                }
                v[i]=vv[e];
                for(int j=i+1;j<k;j++) 
                {
                    v[j]=vv[e+1];
                    e++;
                }
                for(int j=0;j<k;j++) cout<<v[j];
                cout<<endl;
            }
        }
    }
}