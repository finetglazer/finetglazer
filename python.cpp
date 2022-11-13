#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string a;
    cin>>a;
    stringstream ss(a);
    string temp;
    int cnt=0;
    string c ="py";
    while(getline(ss,temp,'.'))
    {
        if(cnt==1)
        {
            if(strcmp(temp,c)==0) cout<<"Yes";
            else cout<<"No";
        }
        cnt++;
    }
    
    
}
