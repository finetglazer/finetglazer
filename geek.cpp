#include <bits/stdc++.h>
using namespace std;
int prime[40005];
void PrimeFilter(){
	for (int i = 0; i <= 40000; i++)
		prime[i] = 1;
	prime[0] = 0;
	prime[1] = 0;
	prime[2] = 1;
    
	for (int i = 2; i <= sqrt(40000); i++)
		for (int j = i * i; j <= 40000; j += i)
			prime[j] = 0;

    // mang prime la mang tim so nt 
}
int main(){	
	PrimeFilter();
	int n;
	cin >> n;
	int k = sqrt(n);
	int count = 0;
	for (int i = 2; i <= 40000; i++){
		if (prime[i] == 1)// i la snt 
			for (int j = i + 1; j <= 40000; j++){
				long long res = i * j;
				if (prime[j] == 1 && res <= k)
                {
                    // cout<<i<<" "<<j<<endl;
                    // j la snt va res < = sqrt 
					++count;
                }
				else if (prime[j] == 1 && res > k)
					break;
			}
	}
    /*





    */
	k = sqrt(sqrt(sqrt(n)));
	for (int i = 2; i <= k; i++)
		if (prime[i] == 1)
        {
            ++count;
            // cout<<i<<" ";
        }
			
	cout << count;
}