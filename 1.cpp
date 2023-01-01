#include<bits/stdc++.h>
using namespace std;
int check(string s)
{
    int n=0;
    int m=0;
    if(s[s.size()-1]!='6') return 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='6')
        {
            while(s[i]!='6')
            {
                n++;
            }
            if(n>3) return 0;
        }
        if(s[i]=='8')
        {
            while(s[i]!='8')
            {
                m++;
            }
            if(m>=2) return 0;
        }
    }
    
    return 1;
}
int main()
{
    int n;
    cin>>n;
    queue<string> qu;
    qu.push("8");
    vector<string> vv;
    while(qu.size()!)
}