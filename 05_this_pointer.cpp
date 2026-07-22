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
        // left - property of object
        // Right - paremeters
        //  These can be understood by the compiler when we use the this pointer.
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
        //(*this).name=name;
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
    T1.getinfo();
    return 0;
}