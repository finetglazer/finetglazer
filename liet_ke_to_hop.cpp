#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a;
    set<int> st;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        st.insert(a);
    }
    int b[1000];
    int tmp=0;
    int c[1000];
    int tmp2=0;
    for(auto &x: st)
    {
        b[tmp++]= x;
        c[tmp2++]= x;
    }
    for(int i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    bool d=true;
    // cout<<tmp;
    while(d)
    {
        int i=k-1;
        while(i>=0 && c[tmp-k+i]==b[i]) i--;
        if(i==-1) d=false;
        else{
            int e=0;
            for(int j=0;j<n;j++)
            {
                if(c[j]>b[i])
                {
                    e=j;
                    break;
                }
            }
            b[i]=c[e];
            for(int j=i+1;j<k;j++)
            {
                b[j]=c[e+1];
                e++;
            }
            for(int j=0;j<k;j++) cout<<b[j]<<" ";
            cout<<endl;
        }
    }
}