#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    vector<int> v;
	    cin>>n>>m>>k;
	    int c2=m,h2=n,c1=0,h1=0;
	    int gt=0;
	    int a[100][100];
	    for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
	    while(c1<=c2 && h1<=h2)
	    {
	    	for(int i=c1;i<c2;i++)
	        {
	        	v.push_back(a[h1][i]);
		    }
		    h1++;
		    for(int i=h1;i<h2;i++)
		    {
		       v.push_back(a[i][c2-1]); 
			}
			c2--;
			if(h2>=h1){
			for(int i=c2-1;i>=c1;i--)
			{
			    v.push_back(a[h2-1][i]); 
			}	
			}
			h2--;
			if(c2>=c1)
			{
				for(int i=h2-1;i>=h1;i--)
			    {
				    v.push_back(a[i][c1]);
			    }
			
			}
			c1++;
		}
		cout<<v[k-1];
		cout<<endl;
		
	}
}
