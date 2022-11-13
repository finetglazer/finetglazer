#include<bits/stdc++.h>
using namespace std;
class phuc
{
    private:
        int x,y;
    public:
        friend phuc operator + (phuc a ,phuc b)
        {
            phuc tong;
        tong.x=a.x+b.x;
        tong.y=a.y+b.y;
        return tong;
        }
};
// phuc phuc::operator + (phuc a ,phuc b)
// {
//     phuc tong;
//     tong.x=a.x+b.x;
//     tong.y=a.y+b.y;
//     return tong;
// }