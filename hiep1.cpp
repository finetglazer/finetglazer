#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n, m;
		cin >> n >> m;
		int a[n + 5][m + 5];
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				cin >> a[i][j];
		int b[n + 5][n + 5];
		for (int i = 1; i <= n + 5; i++)
			for (int j = 1; j <= n + 5; j++)
				b[i][j] = 0;
		for (int x = 1; x <= n; x++){
			for (int i = 1; i <= n; i++){
				for (int j = 1; j <= m; j++)
					b[x][i] += a[x][j] * a[i][j];
				cout << b[x][i] << " ";
			}
		cout << endl;
		}
	}
}