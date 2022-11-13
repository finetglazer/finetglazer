#include<iostream>
using namespace std;
int gcd(int a, int b) {// tim ucln
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main()
{
	int a=50,b=25;
	cout<<gcd(a,b);
}

