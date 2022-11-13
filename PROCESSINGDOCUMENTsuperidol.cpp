/// b1: nhap tung chu cai 1 luc do dau cach tuoi lol
// b2: sau khi moi vong lap o chu cuoi cach.
// b3: neu gap 1 trong 3 dau xuong dong pha vong lap
// b4: in chu hoa cac chu cai dau vs 1 dieu kien nao la phai xuong dong 
// b5: in thuong cac chu cai sau tu in hoa do 
// b6: int thuong cac chu in hoa ma ko sau dau cach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    bool check1=true,check2 =true;// check1 xuong dong T xuong F chua
    while(cin>>a)
    {  
        check2=true;//check qua tu
        for(int i=0;i<a.size();i++)
        {
            if(i==0 && a[i]>='a' && a[i]<='z' && check1==true)
            {
                a[i]=toupper(a[i]);
                check2=false;
            }
            if(i==0 && a[i]>='A' && a[i]<='Z' && check1==true)
            {
                check2=false;
            }
                //den chu cai khac 
            //check1 false la chua xuong dong
            // check 2 false la di qua thang dau r 
            //dong duoi dung dk check2 = true la co nghia chua di qua vong lap for dau kd check1 =flase co nghia chua xuong dong
            check1=false;
            if(i==0 && a[i]>='A' && a[i]<='Z' && check2==true && check1==false )
                a[i]=tolower(a[i]);
            
            if(i!=0 && a[i]>='A' && a[i]<='Z' )
            {
                a[i]=tolower(a[i]);
            }
            if(a[i]=='!' || a[i]=='?' || a[i]=='.')
            {
                cout<<endl;
                check1=true;
                break;
            }
            cout<<a[i];
            if(i==a.size()-1)
            {
                cout<<" ";
            }
        }
    }
}
