for(int a[],int n)
{
	int k=n-1;
	for(int i=0;i<k;i++)
	{
		int temp=a[i];
		a[i]=a[k];
		a[k]=temp;
		k--;
	}
}
