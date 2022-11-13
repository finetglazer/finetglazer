#include<bits/stdc++.h>
using namespace std;
string s="00000000";
vector<string> vv;
bool check(string s)
{
    if(s[4]=='0' || (s[0]=='0' && s[1]=='0') || s[3]=='0') return false;
    if(s[2]>'1') return false;
    return true;
}
void Try(int i)
{
    for(int j=0;j<=2;j+=2)
    {
        s[i-1]=(j+'0');
        if(i==8) 
        {
            if(check(s))
            {
                vv.push_back(s);
            }
        }
        else Try(i+1);
    }
}
int main()
{
    Try(1);
    sort(vv.begin(),vv.end());
    for(int i=0;i<vv.size();i++)
    {
        for(int j=0;j<vv[i].size();j++)
        {
            if(j==2 || j==4) cout<<"/";
            cout<<vv[i][j];
        }
        cout<<endl;
    }    
}