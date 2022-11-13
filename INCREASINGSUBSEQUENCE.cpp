#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ifstream in;
    // in.open("SUBSEQUENCE.in");
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int check[1000]={0};
    /*
    cho chay vong lap cat chuoi 
    */
    for(int i =0 ;i<n;i++)
    {
        vector<int> vv;
        for(int j=n-1;j>=0;j--)
        {
            if(a[j]>a[i])
            {
                vv.push_back(a[j]);

            
            if(vv.size()>=2) for(int i=0;i<=vv.size()-1;i++) cout<<vv[i]<<" ";
            cout<<endl;
            }
        };
        for(int i=0;i<= vv.size()-1;i++) cout<<vv[i]<<" ";
        cout<<endl;
    }    
}