#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int tong(int n){
	int res = 0;
	while(n){
		res += n % 10;
		n/=10;
	}
	return res;
}
 
int sum(string s){
	int res = 0;
	for(char x : s){
		res += x-'0';
	}
	return res;
}
 
set<int> mm;
 
void init(){
	mm.insert(9);
	for(int i = 1; i <= 1000; i++){
		if(mm.find(tong(i)) != mm.end()){//15 ko chiahet chen 15
			mm.insert(i);
		}
	}
}
 
int main(){
// 	#ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	#endif
	init();
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int tong = sum(s);
		if(mm.find(tong)!=mm.end()) cout << "1\n";
		else cout << 0 << endl;
	}
	return 0;
}
