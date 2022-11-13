#include<bits/stdc++.h>
using namespace std;
struct point{
    double x,y;
    double distance(point h){
        return sqrt(pow(x - h.x,2) + pow(y-h.y,2));
    }
};
int main(){
    #ifndef ONLINE_JUDGE
   freopen("INPUT.txt","r",stdin);
   freopen("OUTPUT.txt","w",stdout);
   #endif
    struct point a,b,c;
    int T;
    cin >>T;
    while(T--){
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
        double x1 = a.distance(b), x2 = a.distance(c), x3 = b.distance(c);
    if(x1 <= 0 || x2<=0 || x3<=0 || x1 + x2 <=x3 ||x1+x3<=x2||x2+x3 <= x1){
        cout<<"INVALID"<<endl;
        continue;
    }
 //   cout<< x1 << " "<<x2 <<" "<<x3<<endl;
    double p =(x1+x2+x3)/2;
    double S = sqrt(p *(p-x1) * (p-x2) *(p-x3));
    cout<<fixed <<setprecision(2) <<S<<endl;

}
    return 0;
}