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
    virtual ~base()
    {
        cout << "Base_Dest" << endl;
    }
};
class child : public base
{
public:
    child()
    {
        cout <<"Child_Const" << endl;
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
    delete p;
}