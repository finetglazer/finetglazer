#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        string num_1="";
        string num_2="";
        if(a.size()>b.size()) 
        {
            num_1=a;
            num_2=b;
        }
        else if(a.size()<b.size())
        {
            num_1=b;
            num_2=a;
        }
        else
        {
            if(a>b)
            {
                num_1=a;
                num_2=b;
            }
            else
            {
                num_1=b;
                num_2=a;
            }
        }
        int d=0;
        int k=num_1.size()-num_2.size();
        int res[2000];
        for (int i = 0; i < 2000; i++)
            res[i] = 0;
        for(int i=num_1.length()-1;i>=k;i--)
        {
            num_1[i]-='0';
            num_2[i-k]-='0';
            if(d!=0)
            {
                res[i]-=1;
                d=0;
            }
            res[i]+=num_1[i]-num_2[i-k];
            if(res[i]<0)
            {
                d++;
                res[i]+=10;
            }
        }
        for(int i=k-1;i>=0;i--)
        {
            num_1[i]-='0';
            if(d!=0)
            {
                res[i]-=1;
                d=0;
            }
            res[i]+=num_1[i];
            if(res[i]<0)
            {
                d++;
                res[i]+=10;
            }
        }
        for(int i=0;i<num_1.size();i++)
        {
            cout<<res[i];
        }
        cout<<endl;
    }
    

}