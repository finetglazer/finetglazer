#include<bits/stdc++.h>
using namespace std;
struct res
{
    string nb;
    string name;
    string birth;
};
void in(res a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        getline(cin,a[i].nb);
        stringstream ss(a[i].nb);
        string tok;
        bool d= true;
        while(ss>>tok)
        {
            if(d)
            {
                d=false;
                a[i].name = tok;
            } 
            else a[i].birth = tok;
        }

    }
    // cout<<a[1].birth;
}
bool cmp(res a,res b)
{
    int s1=0,s2=0,s3=0;
    for(int i = 0 ; i < a.birth.size() ; i++)
    {
        if(i==0 || i==1)
        {
            s1*=10;
            s1+= (a.birth[i]-'0');
        }
        if(i==3 || i==4)
        {
            s2*=10;
            s2+= (a.birth[i]-'0');
        }
        if(i>=6)
        {
            s3*=10;
            s3+= (a.birth[i]-'0');
        }
    }
    int x1=0,x2=0,x3=0;
    for(int i = 0 ; i < b.birth.size() ; i++)
    {
        
        if(i==0 || i==1)
        {
            x1*=10;
            x1+= (b.birth[i]-'0');
        }
        if(i==3 || i==4)
        {
            x2*=10;
            x2+= (b.birth[i]-'0');
        }
        if(i>=6)
        {
            x3*=10;
            x3+= (b.birth[i]-'0');
        }
    }
    // cout<<s1<< " "<<s2<< " "<<s3;
    //dong duoi day linh hon cua ham cmp
    if(s3!=x3) return s3<x3;
    if(s2!=x2) return s2<x2;
    return s1<x1;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("INPUT.txt","r",stdin);
    freopen("OUTPUT.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    cin.ignore();
    res lst[50];
    in(lst,n);
    sort(lst+1,lst+n+1,cmp);
    cout<<lst[n].name<<endl<<lst[1].name;
}
