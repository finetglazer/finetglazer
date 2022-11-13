// ; Xác định đoạn cuối giảm dần dài nhất, tìm chỉ số i của phần tử x[i] đứng liền trước đoạn 
// ; cuối đó. Điều này đồng nghĩa với việc tìm từ vị trí sát cuối lên đầu, gặp chỉ số đầu tiên 
// ; thỏa mãn x[i]<x[i+1] .
// ;  +Nếu tìm thấy chỉ số i như trên
// ;  +Trong đoạn cuối giảm dần, tìm phần tử x[k] nhỏ nhất thỏa mãn điều 
// ; kiện x[k] >x[i].
// ;  +Đảo giá trị x[k] và x[i]
// ;  +Sắp xếp đoạn cuối trở thành tang dần
// ;  +Nếu không tìm thấy tức là toàn dãy đã sắp xếp giảm dần, đây là cấu hình cuối 
// ; cùng
#include<bits/stdc++.h>
using namespace std;
void sinh_nhi_phan(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
        cout<<a[i];
    }
    cout<<" ";
    bool d=true;
    while(d)
    {
        int i=n-2;
        while(i>=0 && a[i]>a[i+1])
        {
            i--;
        }
        if(i==-1) d=false;
        else
        {
            for(int j=n-1;j>=0;j--)
            {
                if(a[j]>a[i])
                {
                   swap(a[j],a[i]);
                   sort(a+i+1,a+n);
                   break;
                }
            }
        if(d){
            for(int k=0;k<n;k++)
               cout<<a[k];
            cout<<" ";
        }
            
        }
    }
}
int main()
{
    int a[1000];
    int n;
    cin>>n;
    sinh_nhi_phan(a,n);
}