#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age;
    int year;
    char section;
    int marks;

public:
    string a;
    char d;
    int b, c, e;
    void setdata()
    {
        name = a;
        age = b;
        year = c;
        section = d;
        marks = e;
    }
    void getdata()
    {
        cout << "Name: " << a << endl;
        cout << "Age: " << b << endl;
        cout << "Year: " << c << endl;
        cout << "Section: " << d << endl;
        cout << "Marks: " << e << endl;
    }
};
int main()
{
    int n, t_marks = 0;
    cout << "Enter total number of students\n";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Name: ";
        cin >> s[i].a;
        cout << "Enter age: ";
        cin >> s[i].b;
        cout << "Enter year: ";
        cin >> s[i].c;
        cout << "Enter section: ";
        cin >> s[i].d;
        cout << "Enter marks: ";
        cin >> s[i].e;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nDetails of student s" << i << "\n";
        s[i].getdata();
        t_marks = s[i].e + t_marks;
    }
    cout << "Total Marks: " << t_marks;
}

