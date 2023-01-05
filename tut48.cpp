#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int x)
    {
        data1 = x;
        cout << "Base 1 class constructor is called " << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of the Data1 is : " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int y)
    {
        data2 = y;
        cout << "Base 2 class constructor is called " << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of the Data2 is : " << data2 << endl;
    }
};

class Derived : public Base1, public Base2 // Multiple Inheritance..
{
    int derived1, derived2;

public:
    //-----> **** //
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor is called " << endl;
    }
    void printData(void)
    {
        cout << "The value of the derived1 is :" << derived1 << endl;
        cout << "The value of the derived2 is :" << derived2 << endl;
    }
};

int main(void)
{
    Derived der(5, 10, 15, 20);
    der.printDataBase1();
    der.printDataBase2();
    der.printData();

    return 0;
}