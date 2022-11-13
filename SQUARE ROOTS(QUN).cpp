#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		float sum = 0;
		for(int i=1; i<=n; i++)
		{
			sum = sqrt(sum+i);	
		}
		cout << fixed <<setprecision(5) << sum << endl;
	}
}
