#include<iostream>
using namespace std;
class area
{
    private: 
    int a,b,c;

    public:
    area(int x,int y)
    {
        a=x;
        b=y;
    }
    area(int z)
    {
        c=z;
    }
    int rect()
    {
        return a*b;
    }
    int square()
    {
        return c*c;
    }
};
int main()
{
    area r(5,4);
    area s(6);
    cout<<"Area of rectangle: "<<r.rect()<<endl<<"Area of square: "<<s.square()<<endl;


}
