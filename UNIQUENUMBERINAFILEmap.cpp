#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in;
    in.open("DATA.in");
    map<int,int> mp;
    int x;
    while(in>>x)
    {
        mp[x]++;
    }
    for(pair<int,int> pa:mp)
    {
        cout<<pa.first<<" "<<pa.second<<endl;
    }
    in.close();
}