#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<int>> vv;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[min]>a[j]) min=j;
        }
        swap(a[i],a[min]);
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(a[i]);
        }
        vv.push_back(v);
    }
    for(int i = vv.size()-1; i>=0;i--)
    {
        cout << "Buoc " << i+1 << ": ";
        for(int j : vv[i]) cout << j << ' ';
        cout << endl;
    }

}
