#include <iostream>
#include <string>
using namespace std;
class base
{
public:
    base()
    {
        cout << "Base_Const" << endl;
    }
    ~base()
    {
        cout << "Base_Dest" << endl;
    }
};
class child : public base
{
public:
    child()
    {
        cout << "Child_Const" << endl;
    }
    ~child()
    {
        cout << "Child_Dest" << endl;
    }
};
int main()
{
    base *p;
    child c;
    p = &c;
    delete p; // BC CC BD
    // p->~base();    BC CC BD CD BD
    // p->~child();  error: the type being destroyed is 'base', but the destructor refers to 'child'
}