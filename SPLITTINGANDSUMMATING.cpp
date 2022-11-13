#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in;
    in.open("DATA.in");
    string str;
    in>>str;
    vector<int> v;
    for(int i=0;i<str.size();i++)
    {
        str[i]-='0';
        v.push_back(str[i]);
    }
    // for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    int d=v.size();
    while(d>1)
    {
        vector<int> v1,v2,vv,vvv;
        if(d%2==0)
        {

            for(int i=0;i<d/2;i++) v1.push_back(v[i]);
            for(int i=d/2;i<d;i++) v2.push_back(v[i]);
            int nho=0;
            v.erase(v.begin(),v.end());
            for(int i=d/2-1;i>=0;i--)
            {
                int sum=v1[i] + v2[i] + nho;
                nho=sum/10;
                int x=sum%10;
                vv.push_back(x);
            }
            if(nho) vv.push_back(1);
            for(int i=vv.size()-1;i>=0;i--) v.push_back(vv[i]);
            for(int i=0;i<v.size();i++) cout<<v[i];
            d=v.size();
            cout<<endl;
        }
        else
        {
            v1.push_back(0);
            for(int i=0;i<d/2;i++) v1.push_back(v[i]);
            //v1<v2
            
            for(int i=d/2;i<d;i++) v2.push_back(v[i]);
            int nho=0;
            v.erase(v.begin(),v.end());
            for(int i=d/2;i>=0;i--)
            {
                int sum=v1[i] + v2[i] + nho;
                nho=sum/10;
                int x=sum%10;
                vv.push_back(x);
            }
            if(nho) vv.push_back(1);
            for(int i=vv.size()-1;i>=0;i--) v.push_back(vv[i]);
            for(int i=0;i<v.size();i++) cout<<v[i];
            d=v.size();
            cout<<endl;
        }
        
        
    }
    
    in.close();
}