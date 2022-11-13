#include <bits/stdc++.h>
using namespace std;
int n, m;
int ans;
string k;
int a[100];
int b[100];
void cal(int i, int sum = 0, int vl = 0,string s="")
{
    if (sum > m )
    {
        return;
    }
    if (i == n+1 )
    {
        if(ans<vl)
        {
            ans=vl;
            k=s;
        }
        return;
    }
    for (int j = 0; j <= 1; j++)
    {
        cal(i + 1, sum + j * a[i], vl + j * b[i],s+to_string(j)+" ");
    }
}
int main()
{
    ans = 0;
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int j = 1; j <= n; j++)
        cin >> b[j];
    cal(1);
    cout<<ans;
    cout<<endl<<k;
}