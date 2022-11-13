#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<ll>> pref; // 21 vÃ¬ sá»‘ bÃ© hÆ¡n 2*10^5 cÃ³ nhiá»u nháº¥t 20 bit
ll bit(ll x, ll n){
	return (n >> x) & 1;
}

void ktao()
{
     for(ll i = 0; i < 50; i++){
    	for(ll j = 1; j <= 10000000; j++){
    		if(bit(i, j) == 0) pref[i][j] = pref[i][j - 1] + 1;
    		else pref[i][j] = pref[i][j - 1]; 
    	}
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    ktao();
    ll Q;
    cin >> Q;

// Khá»Ÿi táº¡o prefixsum
   
    while(Q--){
    	ll l, r;
    	cin >> l >> r;
    	ll ans = 1e9;
    	for(ll i = 0; i < 50; i++) ans = min(ans, pref[i][r] - pref[i][l - 1]);
    	cout << ans << '\n';
    }
}