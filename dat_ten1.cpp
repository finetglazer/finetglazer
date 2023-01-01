#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    set<string> st;
    string s;
    vector<string> b;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        st.insert(s);
        // cout<<s<<endl;
    }
    for(auto & x:st)
    {
        b.push_back(x);
    }
    // for(int i=0;i<b.size();i++) cout<<b[i]<<endl;
    vector<string> c;
    for(int i=0;i<k;i++) c.push_back(b[i]);
    for(int i=0;i<k;i++) cout<<c[i]<<" ";
    cout<<endl;
    bool d=true;

    while(d)
    {
        int i=k-1;
        while(i>=0 && c[i]==b[b.size()-k+i]) i--;
        if(i==-1)
        {
            d=false;
        }
        else{
            int end=0;
            for(int j=0;j<b.size();j++)
            {
                if(c[i]==b[j])
                {
                    end=j+1;
                    break;
                }
            }
            c[i]=b[end];
            for(int j=i+1;j<k;j++)
            {
                c[j]=b[end+1];
                end++;
            } 
            for(int l=0;l<k;l++) cout<<c[l]<<" ";
            cout<<endl; 
        }
    }
}