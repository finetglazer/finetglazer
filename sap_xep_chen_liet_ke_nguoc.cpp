#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> vv;
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(a[i]<a[j]) swap(a[j],a[i]);
        }
        vector<int> v;
        for(int j=0;j<=i;j++)
        {
            v.push_back(a[j]);
        }
        vv.push_back(v);
    }
    for(int i = vv.size()-1; i>=0;i--)
    {
        cout << "Buoc " << i << ": ";
        for(int j : vv[i]) cout << j << ' ';
        cout << endl;
    }

}
