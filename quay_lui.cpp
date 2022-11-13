// Thuật toán quay lui dùng để liệt kê các cấu hình. Mối cấu hình được xây dựng bằng cách 
// xây dựng từng phần tử , mỗi phần tử được chọn bằng cách thử tất cả các khả năng .
 // FORM
// void Try(int i){
// for (mọi giá trị j có thể gán cho x[i]){
//         <thử cho x[i] = j>;
//         <đánh dấu đã chọn x[i] nếu cần>;
//         if (x[i] là phần tử cuối của cấu hình) {
//                 <thông báo cấu hình tìm được>;
//             }
//         else Try(i+1);//gọi đệ quy để chọn tiếp x[i+1]
//         <xóa đánh dấu đã chọn x[i] nếu cần>;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int a[1000];
bool chuaxet[1000];
int n;
void in(){
    for(int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<" ";
}
// liet ke xau nhi phan
// void Try(int i)
// {   
//     for(int j=0;j<=1;j++)
//     {
//         a[i]=j;
//         if(i==n)    in();
//         else Try(i+1);
//     }
// }
// Liet ke hoan vi
void Try(int i)
{
    for(int j=1;j<=3;j++)
    {
        if(chuaxet[j])
        {
            a[i]=j;
            chuaxet[j]=false;
            if(i==n) in();
            else{
                Try(i+1);
            } 
            chuaxet[j]=true;
        }
        
    }
}
int main()
{
    for(int i=1;i<=100;i++) chuaxet[i]=true;
    cin>>n;
    Try(1);
}