// Constructor-it is called during obj creation.used in initialisation.
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // Types of constructures
    // non-parameterized
    // Teacher(){
    //     cout<<"Constructor"<<endl;
    // }
    // paramitarized
    Teacher(string n, string d, string s)
    {
        name = n;
        dept = d;
        subject = s;
        // salary = sal;
    }
    void getinfo()
    {
        cout << "name:" << name << endl;
        cout << "dept:" << dept << endl;
    }
    string name;
    string dept;
    string subject;

    //    methods/member functions
    // void changedept = (string newDept)
    // {
    //     dept = newDept;
    // }
};

int main()
{
    Teacher t1("Mou", "computer", "C++");
    t1.getinfo();
    return 0;
}