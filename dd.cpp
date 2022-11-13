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
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
 
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
 
 
int main(){
//	#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	#endif
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n][n];
		int hang[n] ={0}, cot[n]={0};
		FOR(i, 0, n){
			FOR(j, 0, n){
				cin >> a[i][j];
				hang[i] += a[i][j];
				cot[j] += a[i][j];
			}
		}
		int final = max(*max_element(hang, hang +n), *max_element(cot, cot+n));
		int ans = 0;
		int i = 0, j = 0;
		while(i < n && j < n){
			int r = min(final - hang[i], final - cot[j]);
			a[i][j] += r;
			hang[i] += r;
			cot[j] += r;
			ans += r;
			if(hang[i] == final) ++i;
			if(cot[j] == final) ++j;
		}
		cout << ans << endl;
	}
	return 0;
}
