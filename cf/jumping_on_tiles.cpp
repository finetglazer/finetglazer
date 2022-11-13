#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool com(pair<char, ll> a, pair<char,ll> b){
	return a.first > b.first;
}
int main(){
	ll t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		map<char,ll> mp;
		vector<ll> steps;
		steps.push_back(1);
		ll cost = 0;
		vector<pair<char, ll> > d;
		for (ll i = 0; i < a.size(); ++i){
			d.push_back({a[i], i + 1});
			mp.insert({a[i], 1});
		}
		if (a[0] < a[a.size() - 1]){
			sort(d.begin() + 1, d.end() - 1);
			ll pos = 0;
			for (ll i = 1; i < a.size(); ++i){
				if (d[i].first >= d[pos].first and d[i].first <= a[a.size() - 1] and mp[d[i].first]){
					steps.push_back(d[i].second);
					cost += abs(d[i].first - d[pos].first);
					pos = i;
				}
			}
		}
		else if (a[0] > a[a.size() -1]){
			sort(d.begin() + 1, d.end() - 1, com);
			ll pos = 0;
			for (ll i = 1; i < a.size(); ++i){
				if (d[i].first <= d[pos].first and d[i].first >= a[a.size() - 1] and mp[d[i].first]){
					steps.push_back(d[i].second);
					cost += abs(d[i].first - d[pos].first);
					pos = i;
				}
			}
		}
		else{
			for (ll i = 1; i < a.size(); ++i)
				if (a[i] == a[0]){
					steps.push_back(i + 1);
				}
		}
		cout << cost << " " << steps.size() << endl;
		for (auto i : steps) cout << i << " ";
		cout << endl;
	}
}