#include <iostream>
using namespace std;

class Base1
{
public:
    void greet(void)
    {
        cout << "Hello World " << endl;
    }
};

class Base2
{
public:
    void greet(void)
    {
        cout << "Hello world Again " << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2 ::greet();
    }
    /*  if we do not mention here which greet
        function we require it will create an ambiguity problem.
        so,we have to solve it by specifically mentioning it
        which one is required.

    */
};

class B
{
public:
    void say(void)
    {
        cout << "Hi" << endl;
    }
};

class D : public B
{
    int a;

public:
    void say(void)
    {
        cout << "Namastey " << endl;
    }
};

int main(void)
{
    Base1 base1;
    base1.greet();

    Base2 base2;
    base2.greet();

    Derived der;
    der.greet();

    /* Class B and derived class D both have same say().so,we have to solve
    Ambiguity resolution.but here,compiler will take by default say()
    declared in D
    */

    B b1;
    b1.say();

    D d;
    d.say();

    B b2;
    b2.say();

    return 0;
}