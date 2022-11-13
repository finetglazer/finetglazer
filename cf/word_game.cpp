#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string x="";
        string y="";
        string z="";
        vector<string> v,vv,vvv;
        int a,b,c;
        a=0;b=0;c=0;
        cin.ignore();
        getline(cin,x);
        getline(cin,y);
        getline(cin,z);
        stringstream ss(x);
        string tok1;
        stringstream s(y);
        stringstream sss(z);
        map<string,int> m;
        while(sss>>tok1)
        {
            vvv.push_back(tok1);
            m[tok1]++;
        }
        while(s>>tok1)
        {
            vv.push_back(tok1);
            m[tok1]++;
        }
        while(ss>>tok1)
        {
            v.push_back(tok1);
            m[tok1]++;
        }
        for(int i=0;i<n;i++)
        {
            if(m[v[i]]==1) a+=3;
            else if(m[v[i]]==2) a+=1;          
        }
        for(int i=0;i<n;i++)
        {
            if(m[vv[i]]==1) b+=3;
            else if(m[vv[i]]==2) b+=1;
        }
        for(int i=0;i<n;i++)
        {
            if(m[vvv[i]]==1) c+=3;
            else if(m[vvv[i]]==2) c+=1;
        }
        cout<<a<<" "<<b<<" "<<c;
        cout<<endl;
    }
}