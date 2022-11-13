#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n,m,q;
        cin>>n>>m>>q;
        int a[55][55];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>a[i][j];
            }
        }
        int b[55][55];
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=q;j++)
            {
                cin>>b[i][j];
            }
        }
//        for(int i=1;i<=m;i++)
//        {
//            for(int j=1;j<=n;j++)
//            {
//                cout<<at[i][j]<<" ";
//            }
//            cout<<endl;
//        }
        int res[55][55]={0};
        for(int i=1;i<=n;i++)
        {
        	for(int j=1;j<=q;j++)
   	     	{
   	     		for(int k=1;k<=m;k++)
   	     		{
   	     			res[i][j]+= a[i][k]*b[k][j]; 
				} 		
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cout<<res[i][j]<<" ";
			}
			cout<<endl;
		}
}
