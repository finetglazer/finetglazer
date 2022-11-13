#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream file;
    file.open("text1.txt");
    int a[20];
    int n;
    file>>n;
    cout<<"n="<<n<<endl;
    for(int i=0;i<n;i++)
    {
        file>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    file.close();
    ofstream file1;
    file1.open("test.txt");
    for(int i=0;i<n;i++)
    {
        file1<<a[i]<<endl;
    }
    file1.close();
}
