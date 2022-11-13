
#include <iostream>
using namespace std;
int ucln(int a, int b)
{
	if(a==0 || b==0) return a+b;
	while(a!=b)
	{
	    if(a>b) a-=b;
	       	
	    else    b-=a;
	}
	return a;
}
//x le y chan and reverse
// x chan y chan gcd
int main() {
    int t;
	 cin >> t ;
   while(t--){
        long long a,x,y;
        cin >> a >> x >> y ;
        for(int i=1;i<=ucln(x,y);i++) cout << a;
        cout << endl;
    }
    return 0 ;
}
