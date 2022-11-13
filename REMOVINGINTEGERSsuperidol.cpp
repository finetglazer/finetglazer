#include<bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define  pb push_back
using namespace std;

int main()
{
    ifstream in;
    in.open("DATA.in");
    string a;
    set<string> ss;
    while(in>>a)
    {
        bool tmp=true;
        int k;
        try{
            k = stoi(a);
            tmp=false;
            // cout<<k<<endl;
        }
        catch(...){
            tmp=true;
        }
        if(tmp) ss.insert(a);
    }
    // sort(all(ss));
    for(string x: ss)
    {
        cout<<x<<" ";
    }
    in.close();
}