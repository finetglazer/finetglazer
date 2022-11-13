#include<bits/stdc++.h>
using namespace std;
struct tg
{
    int h,m,s;
};
int cmp1(tg a,tg b)
{
    return a.h<b.h;
}
int cmp2(tg a, tg b)
{
    return a.m<b.m;
}
int cmp3(tg a, tg b)
{
    return a.s<b.s;
}
void input(tg a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].h>>a[i].m>>a[i].s;
    }
}
void print(tg a)
{
    cout<<a.h<<" "<<a.m<<" "<<a.s;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("INPUT.txt","r",stdin);
    freopen("OUTPUT.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    tg lst[5005];
    input(lst,n);
    sort(lst+1,lst+n+1,cmp1);

    
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            if(lst[i].h==lst[j].h) 
            {    
                sort(lst+i,lst+j+1,cmp2);
                // cout<<lst[1].m<<" "<<lst[2].m;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
        {
            if(lst[i].m==lst[j].m && lst[i].h==lst[j].h)
            {
                sort(lst+i,lst+j+1,cmp3);
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        print(lst[i]);
        cout<<endl;
    }
}
