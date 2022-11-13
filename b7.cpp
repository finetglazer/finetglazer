#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k=0, j=0;
	cin >> n;
	cin.ignore();
	map<string, int> m;
	string h, b[100];
	for(int i=0; i<n; i++){
		string a;
		getline(cin, a);
		if(a==""){
			k=1;
			continue;
		}
		if(i==0||k==1){
			h=a;
			b[j++]=a;
			k=0;
		}
		m[h]++;
	}
	for(int i=0; i<j; i++){
		cout << b[i]<<": "<<m[b[i]]-1<<endl;
	}
}
