#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        queue<long long> qu;
        qu.push(9);
        while(1)
        {
            long long x=qu.front();
            qu.pop();
            if(x%n==0)
            {
                cout<<x;
                break;
            }
            else{
                qu.push(x*10);
                qu.push(x*10+9);
            }
        }
        cout<<endl;
    }
}