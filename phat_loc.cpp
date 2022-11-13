// Độ dài xâu ít nhất là 6
// Chữ số đầu tiên là chữ số 8, chữ số cuối cùng là chữ số 6
// Không có 2 chữ số 8 nào ở cạnh nhau
// Không có nhiều hơn 3 chữ số 6 ở cạnh nhau
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    queue<string> qu;
    string s="8";
    qu.push(s);
    vector<string> vv;
    while(!qu.empty())
    {
        // cout<<"bck"<<endl;
        string tmp=qu.front();
        qu.pop();
        if(tmp.size()==n)
        {
            vv.push_back(tmp);
        } 
        else if(tmp.size()<n-1)
        {
            int e=tmp.size()-1;
            if(tmp[e]=='8') qu.push(tmp+"6");
            else{
                if(tmp[e-1] =='6' && tmp[e-2]=='6' ) qu.push(tmp+"8");
                else{
                    qu.push(tmp+"6");
                    qu.push(tmp+"8");
                } 
            }  
        }
        else if(tmp.size()==n-1)
        {
            int e=tmp.size()-1;
            if(tmp[e]=='8') qu.push(tmp+"6");
            else {
                if(tmp[e-1]=='8') qu.push(tmp+"6");
                else if(tmp[e-1]=='6' && tmp[e-2]=='8') qu.push(tmp+"6");
            }

        }
        /* code */
    }
    // cout<<"6";
    sort(vv.begin(),vv.end());
    for(int i=0;i<vv.size();i++) cout<<vv[i]<<endl;
    
    

}