#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in("VANBAN.in");
    string tok;
    set<string> ss;
    while(in>>tok)
    {
        for(int i=0;i<tok.size();i++)
        {
            tok[i]=tolower(tok[i]);
        }
        ss.insert(tok);
    }
    for(auto &x: ss)
    {
        cout<<x<<endl;
    }
    in.close();
}