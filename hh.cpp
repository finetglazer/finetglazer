#include <bits/stdc++.h>
using namespace std;
const long long modulo = 10000007;
int main(){
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	long long maximum = 1;
	for (long long i = 1; i <= modulo; ++i)	
		if (a % i == b % i && b % i == c % i && c % i == d % i){
			if (i > maximum)
				maximum = i;
		}
	cout << maximum;
}
