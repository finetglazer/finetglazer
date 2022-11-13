#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        vector<int> v1(n);
        vector<int> v2(n);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i]>>v2[i];
        }
        int a[n];
        int b[n];
        for(int i=0;i<n;i++) a[i]=0;
        for(int j=0;j<n;j++) b[j]=0;
        // cout<<v1.size()<<" "<<v2.size()<<endl;
        bool d=true;
        int min=100000;
        while(d)
        {
            int tich=1;
            int tong=0;
            int i=n-1;
            int j=n-1;
            while(i>=0 && a[i]!=0) i--;
            while(j>=0 && b[j]!=0) j--;
            if(i==-1) d=false;
            else{
                a[i]=v1[i];
                b[j]=v2[j];
                for(int k=i+1;k<n;k++) a[k]=0;
                for(int l=j+1;l<n;l++) b[l]=0;
                for(int m=0;m<n;m++)
                {
                    if(a[m]!=0)
                        tich*=a[m];
                } 
                for(int p=0;p<n;p++) tong+=b[p];
                // cout<<tich<<" "<<tong<<" ";
                if(abs(tich-tong)<min) min=abs(tich-tong);
            } 
        }
        cout<<min<<endl;
}