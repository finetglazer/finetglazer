#include<bits/stdc++.h>
using namespace std;
int dx[8]={-2,-1,1,2,-2,-1,1,2};
int dy[8]={1,2,2,1,-1,-2,-2,-1};
int cal(int x1,int y1,int x2,int y2)
{
    queue<pair<int,pair<int,int>>> qu;
    int a[10][10];
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            a[i][j]=0;

    a[x1][y1]=1;
    qu.push({x1,{y1,0}});
    while(1)
    {
        pair<int,pair<int,int>> cur=qu.front();
        if(cur.first==x2 && cur.second.first==y2)
        {
            return cur.second.second;
        }
        qu.pop();
        for(int i=0;i<8;i++)
        {
            if(cur.first+dx[i]>=1 && cur.first+dx[i]<=8 
            && cur.second.first+dy[i]>=1 && cur.second.first+dy[i]<=8 
             && a[cur.first+dx[i]][cur.second.first+dy[i]]==0)
            {
                qu.push({cur.first+dx[i],{cur.second.first+dy[i],cur.second.second+1}});
            }
        }
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int y1,y2;
        int x1,x2;
        x1=s1[0]-'a'+1;x2=s2[0]-'a'+1;
        y1=(s1[1]-'0');y2=(s2[1]-'0');
        // x1 ,y1
        // cout<<x1<<" "<<x2<<endl;
        cout<<cal(x1,y1,x2,y2)<<"\n";
    }
}
