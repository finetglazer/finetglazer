#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<pair<int,int>> st;
    st.insert({1,3});
    st.insert({2,3});
    for(auto i : st)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}