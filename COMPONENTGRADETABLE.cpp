#include<bits/stdc++.h>
using namespace std;
struct student
{
    string ID;
    string name;
    string IDC;
    float g1,g2,g3;
};
int cmp( student c, student d)
{
    return c.name<d.name;
}
void in(student a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].ID;
        while(getchar()!= '\n' );
        getline(cin,a[i].name);
        cin>>a[i].IDC;
        cin>>a[i].g1>>a[i].g2>>a[i].g3;
    }
}
void print(student a)
{
    cout<<a.ID<<" "<<a.name<<" "<<a.IDC<<fixed<<setprecision(1)<<" "<<a.g1<<" "<<a.g2<<" "<<a.g3;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("INPUT.txt","r",stdin);
    freopen("OUTPUT.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    student lst[150];
    in(lst,n);
    vector<string> vv;
    for(int i=1;i<=n;i++)
    {
        vv.push_back(lst[i].name);
    }
    sort(vv.begin(),vv.end());
    // sort(lst+1,lst+n+1,cmp);
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<i<<" ";
    //     print(lst[i]);
    //     cout<<endl;
    // }
    for(int i=0;i<vv.size();i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(lst[j].name==vv[i])
            {
                cout<<(i+1)<<" ";
                print(lst[j]);
                if(i<vv.size()-1) cout<<endl;
                break;
            }
            
        }
    }
}