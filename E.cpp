#include<bits/stdc++.h>
using namespace std;
void chuyen(char x,char y)
{
    cout<<x<<" -> "<<y<<endl; 
}
void thaphn(int n,char a,char b,char c)
{
    // diem ket thuc khi n==1 con 1 dia tren a vut sang c
    if(n==1) chuyen(a,c);
    else{
        //b1 vut n-1 dia a sang b
        thaphn(n-1,a,c,b);
        //b2 vut dia thu n sang c
        chuyen(a,c);
        //b3 de quy vut n-1 dia tu b sang c
        thaphn(n-1,b,a,c);
    }
}
int main()
{
    int n;
    cin>>n;
    char x='A';
    char y='B';
    char z='C';
    thaphn(n,x,y,z);
}