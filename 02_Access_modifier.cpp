#include <iostream>
#include <string>
using namespace std;
class Teacher // class declaration

{
private:
    double tsalary; // Declared as  private so that it can only be accessible by the
    // account department

    //  pubic access modifier
public:
    // properties
    string tname;
    string tdept;
    string tsubject;

    // member functions
    void change_dept(string tnewdept)
    {
        tdept = tnewdept;
    }
    // with the help of setter and getter methods we can acsess the salary
    //  setter mehod used to set the value
    void set_salary(double s)
    {
        tsalary = s;
    }
    // getter method is used to get the value
    double get_salary()
    {
        return tsalary;
    }
};
int main()
{
    Teacher t1; // object
    t1.tname = "SHRUTI";
    t1.tdept = "DATA-SCIENCE";
    t1.tsubject = "COMPUTER SCIENCE";
    t1.set_salary(25000);
    // t1.change_dept("BASIC SCIENCE");
    // t1.update_salary(30000);
    cout << t1.tname << endl;
    cout << t1.tdept << endl;
    cout << t1.tsubject << endl;
    cout << t1.get_salary() << endl;

    return 0;
}