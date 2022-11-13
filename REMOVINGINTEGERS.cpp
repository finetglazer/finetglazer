#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in;
    in.open("DATA.in");
    string a;
    vector<string> s;
    unsigned long long num=0;
    while(in>>a)
    {
        if(a[0]>='0' && a[0]<='9')
        {
            stringstream ss(a);
            ss>>num;
            if(num>2147483647) s.push_back(a);
        }
        else 
        {
            s.push_back(a);
        }
    }
    int n=s.size();
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }
    in.close();
}
