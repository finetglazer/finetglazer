#include<iostream>

using namespace std;
int main()
{
	int i=0;
	cin>>i;
	while(i--)
	{
	    char n;
	    cin>>n;
	    if(n>='a'&&n<='z') {
	    	n=n-32;
		}
	    else n=n+32;
	    cout<<n<<endl;
	}
}
