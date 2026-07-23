#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:
    double salary;

public:
    // properties/data member
    string name;
    string dept;
    string subject;
    // parametized constructor
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    Teacher(Teacher &orgobj) // copy constructor
    {
        cout << "This is a Custom copy constructor" << endl;
        /*left part- points to the current object (T2)
        Right part - points to the original object (T1)*/
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->subject = orgobj.subject;
        this->salary = orgobj.salary;
    }

    // member function
    void getinfo()
    {
        cout << "name: " << name << endl;
        cout << "department: " << dept << endl;
        cout << "subject: " << subject << endl;
        cout << "salary: " << salary << endl;
    }
};
int main()
{
    Teacher T1("Shruti", "computer Science", "Mathematics", 5000);
    Teacher T2(T1); // OBJECT IS PASSED AS AN ARGUMENT(custom  copy constructor)
    T2.getinfo();

    return 0;
}