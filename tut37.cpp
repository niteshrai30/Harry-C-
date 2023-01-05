

#include<iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;
   
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee(){}
};

class Programmer : public Employee           // Inheritace of class.(Single Inheritance). 
{
    public:
    int languageCode;

    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }

    void getData(){
        cout << id << endl;
    }
};


int main(void)
{
    Employee harry(1),rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    Programmer skillf(10);
    cout << skillf.languageCode << endl;
    cout << skillf.id << endl;

    skillf.getData();


    return 0;
}