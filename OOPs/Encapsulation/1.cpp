// Encapsulation-wrapping up data and member functions like a capsul in a sungle unit called class.
#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    // data hiding
private:
    double salary;
    /* data */
public:
    string name;
    string dept;
    string subject;

    //    methods/member functions
    void changedept = (string newDept)
    {
        dept = newDept;
    }
};

int main()
{
    Teacher t1;
    Teacher t2;
    Teacher t3;
    t1.name = "mou";
    t1.dept = "CS";
    t1.subject = "Computer";
    cout << t1.name << endl;
    return 0;
}