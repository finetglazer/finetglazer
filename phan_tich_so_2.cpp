#include<bits/stdc++.h>
using namespace std;
int n;
vector<string> vv;
void cal(int sum,int cur,string tmp="")
{
    if(sum==0)
    {
        vv.push_back(tmp);
        return;
    }
    for(int j=cur;j>=1;j--)
    {
        if(sum-j>=0)
        {
            if(sum-j==0)
            {
                cal(sum-j,j,tmp+to_string(j));
            }
            else cal(sum-j,j,tmp+to_string(j)+" ");
        }

    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vv.clear();
        cin>>n;
        cal(n,n);
        cout<<vv.size()<<endl;
        for(int i=0;i<vv.size();i++)
        {
            cout<<"("<<vv[i]<<")"<<" ";
        }
        cout<<endl;
    }
}