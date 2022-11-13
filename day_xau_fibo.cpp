#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll fibo[100];
void ktao()
{
    fibo[1] = 1;
    fibo[2] = 1;
    ll i = 3;
    while (i <= 92)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        i++;
    }
}
char cal(ll n, ll k)
{
    if (n == 1)
        return 'A';
    if (n == 2)
        return 'B';
    if(k<=fibo[n-2]) return cal(n-2,k);
    else return cal(n-1,k-fibo[n-2]);
}
int main()
{
    ll t;
    cin >> t;
    ktao();
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        cout<<cal(n,k);
        cout<<endl;
    }
}