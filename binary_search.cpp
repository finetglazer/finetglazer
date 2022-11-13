int binary_Search(int a[],int l,int r,int x)
{
    if(r>=l)
    {
        int mid=l+(r-l)/2 ;  //tranh tran mang vi (l+r)/2
        if(a[mid]==x) return 1;// 1 la tim thay
        if(a[mid]>x) 
            return binary_Search(a,l,mid-1,x);
        else 
            return binary_Search(a,mid+1,r,x);
    }
    else return -1;
}
