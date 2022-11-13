#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main () {
  /*Khai báo biến */
  string str;// char str[80];
  ifstream finp;

  /*Đọc từ file*/
  finp.open ("Ptit.in");
  while(getline(finp, str))
  {
    cout<<str<<"\n";
  }

  finp.close();
}