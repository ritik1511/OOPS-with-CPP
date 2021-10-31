#include <iostream>
using namespace std;
class func
{

private:
    int a, b;

public:
    static int count;
    func(int x, int y)
    {
        a = x;
        b = y;
        cout << "Sum is: " << a + b << endl;
        count++;
    }
};
int func::count = 0;
int main()
{
    func obj1(2, 3);
    func obj2(6, 7);
    func obj3(10, 15);
    cout << "No. of function calls: " << func::count << endl;
}
