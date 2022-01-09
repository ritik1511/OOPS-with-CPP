#include <iostream>
using namespace std;
class A
{
public:
    void dispA()
    {
        cout << "\nClass A Method called " << endl;
    }
};
class B : protected A
{
public:
    void dispB()
    {
        cout << "\nCalling class A method from class B method" << endl;
        dispA();
    }
};
int main()
{
    B obj;
    obj.dispB();
}