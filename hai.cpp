#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream file;
	file.open("DATA.in");
	string a;
	string strnum = "";
	int num;
	long long sum = 0;
	while (getline(file, a)){
		for (int i = 0; i < a.length(); i++){
			if (a[i] >= '0' && a[i] <= '9')
				strnum += a[i];	
				// cout<<strnum<<" ";
			if (a[i + 1] < '0' || a[i + 1] > '9'){
				if (strnum.length() <= 10){
					stringstream change_to_num(strnum);
					change_to_num >> num;
					//cout<<num<<endl;;
					if (num <= 2147483647)
						sum += num;
				}
				strnum = "";
				num = 0;
			}
		}	
	}
	cout << sum;
	file.close();
}