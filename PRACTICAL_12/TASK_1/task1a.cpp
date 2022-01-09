#include <iostream>
using namespace std;
class A
{
private:
    int a;

public:
    int b;

protected:
    int c;
};
class B : protected A
{

public:
    void display()
    {
        b = 20;
        c = 40;
        cout << "b=" << b << endl
             << "c=" << c;
    }
};
int main()
{
    B obj;
    obj.display();
}