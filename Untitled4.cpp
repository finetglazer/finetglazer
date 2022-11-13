#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void mul(string a,string b)
{
	int s1=a.size();
		int s2=b.size();
		vector<int> v1;
		vector<int> v2;
		// chuyen vao vector vs gia tri so
		for(int i=0;i<s1;i++)
		{
			v1.push_back(a[i]-48);
		}
		for(int i=0;i<s2;i++)
		{
			v2.push_back(b[i]-48);
		}
		int s=s1+s2;
		// res la vector 2 chieu luu tung gia tri sau moi phep tinh vs 1 so
	    int e[s2][s1+1]; 
		//abcd
//		     e
//		   0xy
//		   0k0
//		   cs0
        int index=0;
		for(int j=s2-1;j>=0;j--)
		{
			int k=0;
			//step1:chen 0 vao cac cho du ra
			while(k<index){
				e[j][k]=0;
				k++;
			}
			//step2:nhan 
			int nho=0,so=0;
			for(int i=s1-1;i>=0;i--)
			{
				so = a[i] * b[j] + nho;
				e[j][k++]=so%10;
				nho=so/10;
			}
			if(nho>0) e[j][k]=nho;
			//step3 them 0 vao cac p tu cuoi truoc khi dao ngc ham
			while(k<s)
			{
				k++;
				e[j][k]=0;
			}
			reverse(e[j],e[j]+k);//map phai dung interitor
			index++;
		}
		for(int i=0;i<s;i++)
		{
			cout<<e[j][i];
		}
	}
		
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b;
		cin>>a>>b;
		mul(a,b);
		cout<<endl;
	}
}
