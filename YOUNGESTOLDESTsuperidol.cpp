#include<bits/stdc++.h>
using namespace std;
struct res
{
    string name;
    string birth;
};
void in(res a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].name>>a[i].birth;
    }
}
bool cmp(res a,res b)
{
    int d1=(a.birth[0]-'0')*10 + (a.birth[1]-'0');
    int d2=(b.birth[0]-'0')*10 + (b.birth[1]-'0');
    int m1=(a.birth[3]-'0')*10 + (a.birth[4]-'0');
    int m2=(b.birth[3]-'0')*10 + (b.birth[4]-'0');
    int y1=(a.birth[6]-'0')*1000+(a.birth[7]-'0')*100+(a.birth[8]-'0')*10+(a.birth[9]-'0');
    int y2=(b.birth[6]-'0')*1000+(b.birth[7]-'0')*100+(b.birth[8]-'0')*10+(b.birth[9]-'0');
    if(y1 != y2) return y1<y2;
    if(m1 != m2) return m1<m2;
    return d1<d2;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("INPUT.txt","r",stdin);
    freopen("OUTPUT.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    res lst[50];
    in(lst,n);
    sort(lst+1,lst+n+1,cmp);
    cout<<lst[n].name<<endl<<lst[1].name;

}