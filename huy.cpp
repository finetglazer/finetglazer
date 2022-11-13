#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) cin>>a[i][j];
		}
		int so=0;
		for(int j=0;j<n;j++){		//check d?ng dau
			int count=0;
			for(int x=1;x<n;x++){
				for(int y=0;y<n;y++){
					if(a[x][y]==a[0][j]) {
						count++;break;
					}
				}
			}
			if(count==n-1) so++;
		}
		cout<<so<<endl;
	}
}
