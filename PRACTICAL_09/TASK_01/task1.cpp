#include <iostream>
using namespace std;

class student
{
private:
    int roll_num;
    long long p_num;
    string add;

public:
    void setdata()
    {

        cout << "Enter roll num: ";
        cin >> roll_num;
        cout << "Enter phone num: ";
        cin >> p_num;
        cout << "Enter address: ";
        cin >> add;
    }
    void getdata()
    {
        cout << "Roll num: " << roll_num << endl;
        cout << "Phone num: " << p_num << endl;
        cout << "Address: " << add << endl;
    }
};
int main()
{
    student sam, john;

    sam.setdata();
    cout << "Details of Sam\n";
    sam.getdata();
    cout << "\n";
    john.setdata();
    cout << "Details of John\n";
    john.getdata();
}
