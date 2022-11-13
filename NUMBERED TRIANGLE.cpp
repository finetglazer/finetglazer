#include<iostream>
using namespace std;
int main()
{
	int i;
	cin>>i;
	int count=1;
	int l=0;
	for(int j=1;j<=i;j++)
	{	//row 1 column 1: 1
	//row 2 c 1 c2 c3
	// row 3 c 1 2 3 4 5
		for(int k=1;k<=j+l;k++)
		{
			cout<<count;
		    count++;			   
		}
		l++;
		count=1;
		cout<<endl;	
	}
}
