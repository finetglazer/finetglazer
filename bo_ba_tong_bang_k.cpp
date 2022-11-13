#include<bits/stdc++.h>

using namespace std;

int a[5005];

void solve(){
	int n, k;
	cin >> n >> k; 
	unordered_map<int, int> cnt;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		cnt[a[i]]++;
	}	
	for(int i = 1; i <= n; i++){
		for(int j = i + 1; j <= n; j++){
			int tmp = k - a[i] - a[j];
			if(cnt[tmp] < 1) continue;
			if(a[i] == a[j]){
				if(tmp == a[i] && cnt[tmp] <= 2) continue;
				else{
					cout << "YES\n";
					return;
				}
			}
			else{
				if(tmp == a[i] && cnt[tmp] <= 1) continue;
				else if(tmp == a[j] && cnt[tmp] <= 1) continue;
				else{
					cout << "YES\n";
					return;
				}
			}
		}
	}
	cout << "NO\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int tt;
    cin >> tt;
    while(tt--){
    	solve();
    }
}