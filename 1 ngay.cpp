#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in("DATA.in");
    int a;
    map<int,int> mp;
    while(in>>a)
    {
        mp[a]++;
    }
    for(auto &x:mp)
    {
        cout<<x.first<<" "<<x.second;
        cout<<endl;
    }
}
