// Thuật toán sinh nhị phân :
// • Bước 1 : Khởi tạo cấu hình ban đầu : 000...0 (n số 0)
// • Bước 2 : Xét từ cuối dãy về đầu, gặp số 0 đầu tiên thì thay nó bằng số 1 và đặt 
// tất cả các phần tử phía sau vị trí đó bằng 0.
// • Bước 3 : In cấu hình và quay lại bước 2.Sinh cho đến khi gặp cấu hình cuối : 
// 111...1 (n số 1) thì kết thúc quá trình sinh.
#include<bits/stdc++.h>
using namespace std;
int a[100];
void sinh_np(int n)
{
    for(int i=0;i<n;i++)
    {
       a[i]=0; 
       cout<<a[i];
    } 
    cout<<" ";
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==0) 
        {
            a[i]=1;
            for(int k=i+1;k<n;k++) a[k]=0;
            for(int i=0;i<n;i++) cout<<a[i];
            cout<<" ";
            i=n;
        }
    }
}
void sinh(int n)
{
    string s="";
    while(n!=0)
    {
        s+='0';
        n--;
    }
    cout<<s<<" ";
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0')
            
                s[i]='1';
                for(int k=i+1;k<s.size();k++) s[k]='0';
                i=s.size();
                cout<<s<<" ";
        }
            
    
    
}
void sinhnhiphan(int n)
{
    for(int i=0;i<n;i++)
    {
        a[i]=0;
        cout<<a[i];
    }
    cout<<" ";
    bool d=true;
    while(d)
    {
        int i=n-1;
        while( i>=0 && a[i]==1)
        {
            i--;
        }
        if(i==-1) d=false;
        else{
            a[i]=1;
            for(int j=i+1;j<n;j++) a[j]=0;
        }
        if(d) for(int k=0;k<n;k++) cout<<a[k];
        cout<<" ";
    }
    

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        sinhnhiphan(n);
        cout<<endl;
    }
}