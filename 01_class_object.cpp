#include <iostream>
#include <string>
using namespace std;
class Teacher // class declaration

{ 
    // access modifier
public:
    // properties
    string tname;
    string tdept;
    string tsubject;
    double salary;
    // member functions
    void change_dept(string tnewdept)
    {
        tdept = tnewdept;
    }
    void update_salary(double tnewsalary)
    {
        salary = tnewsalary;
    }
};
int main()
{
    Teacher t1; // object
    t1.tname = "SHRUTI";
    t1.tdept = "DATA-SCIENCE";
    t1.tsubject = "COMPUTER SCIENCE";
    t1.salary = 25000;
    // t1.change_dept("BASIC SCIENCE");
    // t1.update_salary(30000);
    cout << t1.tname << endl;
    cout << t1.tdept << endl;
    cout << t1.tsubject << endl;
    cout << t1.salary << endl;

    return 0;
}