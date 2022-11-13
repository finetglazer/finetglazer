#include<bits/stdc++.h>
using namespace std;
int h[11][11]={0};
int n;
int dx[8]={2,-2,-2,-1,-1,2,1,1};
int dy[8]={1,-1,1,2,-2,-1,2,-2};
void in(){
    for(int k=1;k<=n;k++)
    {
        for(int l=1;l<=n;l++)
        {
            cout<<h[k][l]<<" ";
        }
        cout<<endl;
    }

}
void Try(int i,int x,int y)
{   
    int u,v;
    for(int j=0;j<=7;j++)
    {
        u=x+dx[j];
        v=y+dy[j];
        if(u>=1 && u<=n && v>=1 && v<=n && h[u][v]==0)
        {
            h[u][v]=i;
            if(i==n*n){
            in();
			break;	
			} 
            else  Try(i+1,u,v);
            h[u][v]=0;
        }
        
    }
}
int main()
{
    int x,y;
    cin>>n>>x>>y;
    h[x][y]=1;
    Try(2,x,y);
}
