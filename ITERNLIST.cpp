#include<bits/stdc++.h>
using namespace std;
struct cnd
{
    string ID;
    string name;
    string IDC;
    string email;
    string comp;
    int order;
};
bool cmp(cnd a,cnd b)
{
    return a.ID<b.ID;
}
string spacex(string a)
{
    stringstream ss(a);
    string res;
    vector<string> vv;
    while(ss>>res)
    {
        vv.push_back(res);
    }
    string k;
    for(int i=0;i<vv.size();i++)
    {
        k+=vv[i];
        if(i<vv.size()-1) k+=" ";
    }
    return k;
}
void in(cnd a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        a[i].order=i;
        cin>>a[i].ID;
        // a[i].ID=spacex(a[i].ID);
        // cin.ignore();
        getline(cin>>ws,a[i].name);
        a[i].name=spacex(a[i].name);
        // while(getchar()!=' ');
        getline(cin>>ws,a[i].IDC);
        a[i].IDC=spacex(a[i].IDC);
        getline(cin>>ws,a[i].email);
        getline(cin>>ws,a[i].comp);
    }
}
void print(cnd a)
{
    cout<<a.order<<" "<<a.ID<<" "<<a.name<<" "<<a.IDC<<" "<<a.email<<" "<<a.comp;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("INPUT.txt","r",stdin);
    freopen("OUTPUT.txt","w",stdout);
    #endif
    int n;
    cnd lst[105];
    cin>>n;
    in(lst,n);
    int m;
    cin>>m;
    string a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(lst+1,lst+n+1,cmp);
    for(int j=0;j<m;j++)
    {
        for(int i=1;i<=n;i++)
        {
            if(lst[i].comp==a[j]) 
            {       
                print(lst[i]);
                cout<<endl;
            }
        }
    }
    
}