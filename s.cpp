#include<iostream> 
#include<cmath> 
#include<algorithm> 
using namespace std; 
int n,x; 
bool cmp(int a,int b)
{   
    return abs(x-a)<abs(x-b); 
    
} 
void process()
{   cin>>n>>x; 
    int a[n+1]; 
    for(int i=0;i<n;i++) 
       cin>>a[i]; 
    sort(a,a+n,cmp); 
    for(int i=0;i<n;i++)
    {
         cout<<a[i]<<" "; 
        
    } cout<<endl; 
    
} main(){ 
    int t; 
    cin>>t; 
    while(t--){ 
        process(); 
        
    } return 0; 
    
}