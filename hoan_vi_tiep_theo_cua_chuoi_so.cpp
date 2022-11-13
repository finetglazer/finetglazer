#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b;
        cin>>b;
        int a[5];
        a[0]=3;a[1]=10;a[2]=12;
        int cnt=0;
        while(next_permutation(a,a+3) && cnt<4)
        {
            for(auto i:a)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            cnt++;
        };
        cout<<endl;
    }
}