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
	    	cout<<n+1<<endl;
		}
	    else if (n>='A'&&n<='Z')cout<<n<<endl;
	    
	}
}
