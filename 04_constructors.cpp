#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
    double salary;
    public:
    string name;
    string dept;
    string subject;
    Teacher()//Non-paramaterized constructor
    {
        cout<<"Welcome!! I hope you are doing well"<<endl;
        dept="Basic-Science";
    }
    Teacher(string n,string d,string s,double sal)//Parameterized constructor
    {
        name=n;
        dept=d;
        subject=s;
        salary=sal;
    }
    void getinfo(){
        cout<<"Teacher Info"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"Subject : "<<subject<<endl;
        cout<<"salary : "<<salary<<endl;
    }
};
int main(){
    Teacher T1;// invoke Non- parameterized constructor
    Teacher T2("Shruti","Computer Science","Mathematics",5000);//Parameterized constructor
    T2.getinfo();
    Teacher T3("Megha","Computer Science","Deep Learning",6000);
    T3.getinfo();
    return 0;
}