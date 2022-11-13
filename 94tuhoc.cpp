#include <bits/stdc++.h>
using namespace std;
 
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define endl "\n"
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
struct sv{
	string ma, ten, lop;
	float a, b, c;
};
string spacex(string a)
{
    stringstream ss(a);
    string res;
    vector<string> vv;
    while(ss>>res)
    {
        vv.push_back(res);
    }
    string k;
    for(int i=0;i<vv.size();i++)
    {
        k+=vv[i];
    }
    return k;
}
// bool cmp( sv c, sv d)
// {
//     return c.ten<d.ten;
// }
int main(){
	string a;
	getline(cin,a);
	a=spacex(a);
	cout<<a;
}