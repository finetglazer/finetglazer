#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i=s.size()-1;
        while(i>=0 && s[i]=='0')
        {
            i--;
        }
        if(i==-1)
        {
            for(int j=0;j<s.size();j++) cout<<"1";
        }
        else{
            s[i]='0';
            for(int j=i+1;j<s.size();j++) s[j]='1';
            for(int k=0;k<s.size();k++) cout<<s[k];
            cout<<endl;
        }
    }
}