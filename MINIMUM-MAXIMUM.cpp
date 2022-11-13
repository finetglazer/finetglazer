// tim 2 so nguyen lon nhat ma nho nhat tong cacs chu so = s co so chu so la n
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	int m;
	int s;
	cin>>m>>s;
	int x=s;
	if(s>m*9 || s==0 && m >1) cout<<"-1 -1";
 	else
	{
	vector<int> max;
	for(int i=1;i<=m;i++)
	{
		if(s>9)
		{
			max.push_back(9);
			s-=9;
		}
		else
		{
			max.push_back(s);
			s=0;
		}
	}
	x-=1;//x=14//de danh cho thang cuoi 27 x=26
	int min[m]={0};
	for(int i=m-1;i>0;i--)
	{
		if(x>=9)//24 lonw hon bang vi no dax de danh
		{
			min[i]=9;x-=9;//x9 x=5// yy9//y99// 
		}
		else if(x!=0)
		{
			min[i]=x;x=0;//nho hown 9 r thi giong cach tu duy minh
		}
		else {
			break;
		}
	}
	min[0]=x+1;//69//bu lai
	
	for(int i=0;i<m;i++)
	{
		cout<<min[i];
	}
	cout<<" ";
	for(int i=0;i<m;i++)
	{
		cout<<max[i];
	}

	}
}
