#include<bits/stdc++.h>
using namespace std;
// step1 lam ham dao hang
int C,R;
int a[105][105];
void swap(int mat[105][105],int r1,int r2,int col)
{
    for(int i=0;i<col;i++)
    {
        int temp=mat[r1][i];
        mat[r1][i]=mat[r2][i];
        mat[r2][i]=temp;
    }
}
// process
int findrank(int mat[105][105])
{
    // diagonal !=0
    int rank=C;
    for(int row=0;row<rank;row++)
    {
        if(mat[row][row]!=0)
        {
            for(int rtmp=0;rtmp<R;rtmp++)
            {
                if(rtmp!=row)
                {
                    double multi=(double) mat[rtmp][row] / mat[row][row];
                    for(int i=0;i<rank;i++)
                    {
                        mat[rtmp][i]-=multi*mat[row][i];
                    }
                }
            }
        }
        else
        {
            //t1 cacs ptu =0 thi dao
            bool tmp=true;
            for(int i=row+1;i<R;i++)
            {
                if(mat[i][row]!=0)
                {
                    swap(mat,row,i,rank);
                    tmp=false;
                    break;
                }
            }
            if(tmp==true)
            {
                rank--;
                //copy xin cot cuoi
                for(int i=0;i<R;i++)
                {
                    mat[i][row]=mat[i][rank];
                    
                }
                row--;
            }
        }
    }
    return rank;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>R>>C;
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<findrank(a)<<endl;
    }
}
