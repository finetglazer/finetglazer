#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream in;
    in.open("DATA.in");
    int a[100005]={0};
    int cnt=0;
    for(int i=0;i<100005;i++)
    {
        in>>a[i];
        if(a[i]==0) break;
        // cout<<a[i]<<endl;
        cnt++;
    }
    // cout<<a[cnt]<<endl;
    sort(a,a+cnt);
    // for(int i=0;i<cnt;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    int c[100005]={0};
    for(int i=0;i<cnt;i++)
    {
        c[a[i]]++;
    }
    for(int i=0;i<cnt;i++)
    {
        if(c[a[i]]!=0) 
        {
            cout<<a[i]<<" "<<c[a[i]]<<endl;
            c[a[i]]=0;
        }
        
    }
    in.close();
}