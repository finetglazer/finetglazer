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
#define ll long long
 
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
struct Fraction{
    ll num,deno;
};
void read_input( Fraction &A){
    cin >> A.num >> A.deno;
}
void simplify(Fraction &p){
	ll n = gcd(p.num , p.deno);
	p.num /= n;
	p.deno /= n;
    cout<<p.num<<"/"<<p.deno<<" ";
}
void process(Fraction A, Fraction B){
    ll H = lcm(A.deno, B.deno);
    Fraction sum;
    sum.num = A.num *(H/A.deno) + B.num * (H/B.deno);
    sum.deno = H;
    sum.num *= sum.num;
    sum.deno *= sum.deno;
    simplify(sum);
    Fraction D;
    D.num = A.num * B.num * sum.num;
    D.deno = A.deno * B.deno * sum.deno;
    simplify(D);
    cout<<endl;
}
ll T;
int main() {
	int t;
	cin >> T;
	while (T--) {
		Fraction A;
		Fraction B;
		read_input(A);
		read_input(B);
		process(A, B);
	}
}