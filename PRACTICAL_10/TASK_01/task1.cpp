#include <iostream>
using namespace std;
class student
{
private:
    string name;
    string add;
    int tele;
    long long p_num;
    string hof;

public:
    void setdata()
    {
        cout << "\nEnter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> add;
        cout << "Enter telephone num: ";
        cin >> tele;
        cout << "Enter phone num: ";
        cin >> p_num;
        cout << "Enter Head of Family: ";
        cin >> hof;
    }
    void getdata()
    {
        cout << "\nName: " << name << endl;
        cout << "Address: " << add << endl;
        cout << "Telephone: " << tele << endl;
        cout << "Phone num: " << p_num << endl;
        cout << "Head of famliy: " << hof << endl;
    }
};
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].setdata();
    }
    for (int i = 0; i < n; i++)
    {
        s[i].getdata();
    }
}
